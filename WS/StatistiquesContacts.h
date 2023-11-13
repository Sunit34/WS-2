#ifndef STATISTIQUESCONTACTS_H
#define STATISTIQUESCONTACTS_H

#include "Fonctionnalite.h"
#include "Calculateur.h"
#include "GestionnaireContacts.h"

class StatistiquesContacts : public Fonctionnalite {
private:
    GestionnaireContacts gestionnaireContacts;
    Calculateur calculateur;

public:
    void executer() override;
};

#endif // STATISTIQUESCONTACTS_H
