#ifndef CALCULATEUR_H
#define CALCULATEUR_H

#include "Fonctionnalite.h"

class Calculateur : public Fonctionnalite {
public:
    void executer() override;
};

#endif // CALCULATEUR_H
