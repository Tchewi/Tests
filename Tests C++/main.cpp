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
#include <iomanip>
#include <vector>
#include <string>
#include <cstdlib> 
#include <algorithm>

using namespace std;


int main() {
	string s("HELLO"s);
	make_heap(s.begin(), s.end());
	cout << s;

	system("PAUSE");
}