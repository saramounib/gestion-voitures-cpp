#ifndef VOITURE_H
#define VOITURE_H

#include "Reservoir.h"
#include <string>

class Voiture{

private:
    std::string marque;
    int annee;
    double consommation;
    Reservoir reserVoiture;

public:

    Voiture(std::string,int,double,Reservoir);

    //Methodes
    double getNiveauCarburant() const;
    bool approvisionner(double);
    bool fairePlein();
    bool rouler(double);
    bool rouler(double,bool); //Surcharge mode eco
    bool depanner(Voiture&,double);

    //Surcharge Operateurs
    bool operator==(const Voiture&) const;
};

#endif
