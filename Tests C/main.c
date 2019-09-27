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

int main(void)
{
	const char test[6] = "Hello";
	test[0] = 'B';
	printf("%s", test);

	printf("\n");

	char* essai = "Coucou";
	essai = test;
	*essai = 'V';

	printf("%s", essai);

	printf("\n");
	system("PAUSE");
	return EXIT_SUCCESS;
}