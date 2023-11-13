#ifndef GESTIONNAIRECONTACTS_H
#define GESTIONNAIRECONTACTS_H

#include "Fonctionnalite.h"
#include "Contact.h"
#include <vector>

class GestionnaireContacts : public Fonctionnalite {
private:
    std::vector<Contact> contacts;

public:
    void ajouterContact(const Contact& contact);
    void supprimerContact(const Contact& contact);
    void executer() override;
};

#endif // GESTIONNAIRECONTACTS_H
