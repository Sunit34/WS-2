#include "Calculateur.h"
#include <iostream>

void Calculateur::executer() {
    std::cout << "Calculateur : addition" << std::endl;

    double a, b;
    std::cout << "Entrez le premier nombre : ";
    std::cin >> a;
    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> b;

    std::cout << "Résultat de l'addition : " << a + b << std::endl;
}
