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
	

	//vector<int> test = { 1,2,3,4,5,6,7,8,9 };

	//size_t temp = 0;

	//test.erase(test.begin() + temp);

	//for (auto it = test.begin(); it != test.end(); it++)
	//{
	//	cout << *it << " ";
	//}


	int essai = 0;
	const int test = essai;
	//Hello

	essai = 45;
	//essai = 64;
	(int&)test = essai;

	cout << test;


	
	system("PAUSE");
	return EXIT_SUCCESS;

}