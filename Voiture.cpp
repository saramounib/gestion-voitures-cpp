#include "Voiture.h"
#include "Reservoir.h"
#include <string>
using namespace std;

Voiture::Voiture(string m,int a,double c,Reservoir res):reserVoiture(res){ //Initialisation prealable de l'attribut de type Reservoir
    marque = m;
    annee = a;
    consommation = c;
}

double Voiture::getNiveauCarburant() const{
    return reserVoiture.getNiveau();
}

bool Voiture::approvisionner(double quantite){
    return reserVoiture.remplir(quantite);
}

bool Voiture::fairePlein(){
    return reserVoiture.remplir();
}

bool Voiture::rouler(double distance){
    double besoin = (distance*consommation)/100.0;
    return reserVoiture.consommer(besoin);
}

bool Voiture::rouler(double distance, bool modeEco){
    if(modeEco){
        double consoReduite = consommation*0.8;
        double besoin = (distance*consoReduite)/100.0;
        return reserVoiture.consommer(besoin);
    }
    else
        return rouler(distance); //On roule en mode normal
}

bool Voiture::depanner(Voiture& autre, double quantite){
    if(reserVoiture.consommer(quantite)){
        if(autre.reserVoiture.remplir(quantite))
            return true;
        else
            reserVoiture.remplir(quantite); //Annulation: on remet le reservoir source dans son etat initial
    }
    return false;
}

bool Voiture::operator==(const Voiture& autre) const{
    return (marque == autre.marque && reserVoiture == autre.reserVoiture);
}
