#include "GestionnaireContacts.h"
#include <iostream>

void GestionnaireContacts::ajouterContact(const Contact& contact) {
    contacts.push_back(contact);
    std::cout << "Contact ajouté : " << contact.nom << std::endl;
}

void GestionnaireContacts::supprimerContact(const Contact& contact) {
    std::cout << "Contact supprimé : " << contact.nom << std::endl;
}

void GestionnaireContacts::executer() {
    std::string nom;
    int age;

    std::cout << "Entrez le nom du contact : ";
    std::cin.ignore();
    std::getline(std::cin, nom);

    std::cout << "Entrez l'âge du contact : ";
    std::cin >> age;

    ajouterContact(Contact(nom, age));
}
