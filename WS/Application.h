#ifndef APPLICATION_H
#define APPLICATION_H

#include "Fonctionnalite.h"
#include <vector>

class Application {
private:
    std::vector<Fonctionnalite*> fonctionnalites;

public:
    ~Application();
    void ajouterFonctionnalite(Fonctionnalite* fonctionnalite);
    size_t size() const;
    void executerFonctionnalite(int choix);
};

#endif // APPLICATION_H
