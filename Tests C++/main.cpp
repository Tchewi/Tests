/*
-----------------------------------------------------------------------------------
Laboratoire : Tests
Fichier     : main.cpp
Auteur(s)   : Quentin Le Ray
Date        : 10.01.2019

But         : Supprimer les doublons d'un vecteur

Remarque(s) :

Compilateur : MinGW-g++ <6.3.0>
-----------------------------------------------------------------------------------
*/


#include <iostream>
#include <string>

using namespace std;

int main() {

	int a = 5;

	int b = 1;

	while (b <= a){
		int c = 1;
		while (c <= b){
			cout << "*";
			c++;
		}
		cout << endl;
		b++;
	}
	
	system("PAUSE");
	return EXIT_SUCCESS;
}