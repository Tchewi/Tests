/*
-----------------------------------------------------------------------------------
Laboratoire : Exercice 5.14
Fichier     : main.cpp
Auteur(s)   : Quentin Le Ray
Date        : 10.01.2019

But         : Supprimer les doublons d'un vecteur

Remarque(s) :

Compilateur : MinGW-g++ <6.3.0>
-----------------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cstdlib> 
#include <algorithm>

using namespace std;

int main() {
	

	int x = 7;

	const int z = x;

	cout << z << endl;

	(int&)z = 48;

	cout << z << endl;

	
	system("PAUSE");
	return EXIT_SUCCESS;

}