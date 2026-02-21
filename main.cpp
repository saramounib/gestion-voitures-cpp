#include "Voiture.h"
#include <iostream>
using namespace std;

int main(){

    cout<<boolalpha; //Pour afficher True et False au lieu de 1 et 0

    Voiture v1("Toyota", 2020, 5, Reservoir(50, 0, "Essence"));
    Voiture v2("Toyota", 2024, 7, Reservoir(50, 2, "Essence"));

    v1.approvisionner(10);
    v1.rouler(100);

    cout<< "v1 roule 120km (mode normal) ? : "<< v1.rouler(120) <<endl;
    cout<< "v1 roule 120km (mode eco) ? : "<< v1.rouler(120,true) <<endl;

    v1.fairePlein();

    cout << "v1 depanne v2 ? : " << v1.depanner(v2,15) <<endl;

    cout<< "Niveau carburant de v1 : "<< v1.getNiveauCarburant() <<" L"<<endl;
    cout<< "Niveau carburant de v2 : "<< v2.getNiveauCarburant() <<" L"<<endl;

    if(v1==v2)
        cout<< "Les deux voitures sont fonctionnellement equivalentes"<<endl;
    else
        cout<< "Les deux voitures ne sont pas fonctionnellement equivalentes"<<endl;


    return 0;
}
