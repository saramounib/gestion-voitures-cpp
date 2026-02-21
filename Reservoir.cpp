#include "Reservoir.h"
#include <string>
using namespace std;

Reservoir::Reservoir(double c, double n, string t){
    capacite = c;
    niveau = n;
    typeCarburant = t;
}

double Reservoir::getCapacite() const{
    return capacite;
    }

double Reservoir::getNiveau() const{
    return niveau;
    }

string Reservoir::getTypeCarburant() const{
    return typeCarburant;
    }

bool Reservoir::remplir(double quantite){
    if(quantite > 0 && (niveau + quantite <= capacite)){
        niveau += quantite;
        return true;
    }
    return false;
}

bool Reservoir::remplir(){
    if(niveau < capacite){
        niveau = capacite;
        return true;
    }
    return false;
}

bool Reservoir::consommer(double quantite){
    if(quantite > 0 && niveau >= quantite){
        niveau -= quantite;
        return true;
    }
    return false;
}

bool Reservoir::operator==(const Reservoir& autre) const{
    return (capacite == autre.capacite &&
            typeCarburant == autre.typeCarburant);
}
