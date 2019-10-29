/*
-----------------------------------------------------------------------------------
Laboratoire : Labo
Fichier     : main.c
Auteur(s)   : Quentin Le Ray
Date        : 

But         : 

Remarque(s) :

Compilateur : MinGW-g++ <6.3.0>
-----------------------------------------------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define MAX_TOKENS 10
#define MAX_HISTORIQUE 10

void separateWords(char* imput, char** tab) {
	//Variable permettant de vérifier si la chaîne est bien pleine
	char* word = (char*)strtok(imput, " ");

	//Séparation des mots
	int i = 0;
	while (word != NULL) {
		tab[i] = word;
		word = (char*)strtok(NULL, " ");
		++i;
	}
}

void calc(char** usrTokens) {
	//Vérifications
	if (usrTokens[1] != NULL && usrTokens[2] != NULL && usrTokens[3] != NULL && usrTokens[4] == NULL) {
		static double historique[MAX_HISTORIQUE];
		static size_t nbDansHisto = 0;

		char* verifPrem;
		char* verifDeux;

		//Conversion des valeurs entrées
		double premChiffre = strtod(usrTokens[1], &verifPrem);
		double deuxChiffre = strtod(usrTokens[3], &verifDeux);

		//Vérif particulière
		if (strcmp(usrTokens[2], "/") == 0 && strcmp(usrTokens[3], "0") == 0) {
			printf("Erreur : Division par 0\n");
		} //Vérification des nombres entrés
		else if (strcmp(verifPrem, "") != 0 || strcmp(verifDeux, "") != 0) {
			printf("Erreur : Paramètre invalide\n");
		}
		else {
			//Gestion de la puissance pour passer dans le switch
			if (strcmp(usrTokens[2], "**") == 0) {
				usrTokens[2] = "^";
			}

			//Vérification de l'opérateur
			switch (usrTokens[2][0]) {
			case '+':
				historique[nbDansHisto] = premChiffre + deuxChiffre;
				printf("%f\n", historique[nbDansHisto]);
				++nbDansHisto;
				break;
			case '-':
				historique[nbDansHisto] = premChiffre - deuxChiffre;
				printf("%f\n", historique[nbDansHisto]);
				++nbDansHisto;
				break;
			case '*':
				historique[nbDansHisto] = premChiffre * deuxChiffre;
				printf("%f\n", historique[nbDansHisto]);
				++nbDansHisto;
				break;
			case '/':
				historique[nbDansHisto] = premChiffre / deuxChiffre;
				printf("%f\n", historique[nbDansHisto]);
				++nbDansHisto;
				break;
			case '^':
				historique[nbDansHisto] = pow(premChiffre, deuxChiffre);
				printf("%f\n", historique[nbDansHisto]);
				++nbDansHisto;
				break;
			default:
				printf("Erreur : Opérateur inconnu\n");
				break;
			}
		}
	}
	else {
		printf("Erreur : nombre de paramètres incorrects\n");
	}
}


int main(void)
{
	char user_input[80] = "calc 2 * 5";

	static char* tokens[MAX_TOKENS];
	separateWords(user_input, tokens);
	//Historique des résultats

	if (strcmp(tokens[0], "calc") == 0) {
		calc(tokens);
	}
	else if (strcmp(tokens[0], "man") == 0 && strcmp(tokens[1], "calc") == 0) {
		//Affiche l'aide
	}

	//Nettoyage du tableau de tokens
	for (size_t i = 0; i < MAX_TOKENS; ++i) {
		tokens[i] = NULL;
	}


	system("PAUSE");
	return EXIT_SUCCESS;
}