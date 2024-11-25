#include <iostream>
#include <string>
#include "Personnages.hpp"

using namespace std;

int main()
{
    // Création des personnages
    Personnage david("David","Epée aiguisée", 20);
    Personnage goliath("Goliath","Epée aiguisée", 20);
    Personnage maximus("Maximus","Double Lame en Acier", 40);
    // Au combat !
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);

    // Temps mort ! Voyons voir la vie de chacun...
    david.afficherEtats();
    goliath.afficherEtats();

    return 0;
}