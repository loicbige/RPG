#include <iostream>
#include <string>
#include "Personnages.hpp"

using namespace std;

int main()
{
    // Création des personnages
    Personnage david("David","Epée aiguisée", 20);
    Personnage goliath("Goliath","Epée aiguisée", 20);
    Personnage sauron("Sauron", "Feu noir", 60, 50);
    
    // Au combat !
    sauron.attaquerMagique(david);
    david.afficherEtats();
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