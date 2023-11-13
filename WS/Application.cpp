#include "Application.h"
#include <iostream>

Application::~Application() {
    for (Fonctionnalite* fonctionnalite : fonctionnalites) {
        delete fonctionnalite;
    }
}

void Application::ajouterF
