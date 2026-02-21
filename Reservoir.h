#ifndef RESERVOIR_H
#define RESERVOIR_H

#include <string>

class Reservoir{

private:
    double capacite;
    double niveau;
    std::string typeCarburant;

public:
    Reservoir(double,double,std::string);

    //Getters
    double getCapacite() const;
    double getNiveau() const;
    std::string getTypeCarburant() const;

    //Methodes
    bool remplir(double);
    bool remplir(); //Surcharge pour le plein
    bool consommer(double);

    //Surcharge Operateurs
    bool operator==(const Reservoir&) const;
};

#endif
