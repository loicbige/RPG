#ifndef DEF_PERSONNAGES

#define DEF_PERSONNAGES

#include <string>
#include "Arme.hpp"



class Personnage
{
public:

    Personnage();
    Personnage(std::string nomArme, int degatsArme);

    void afficherEtats() const;
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;


private:

    // Atributs
    int m_vie;
    int m_mana;
    Arme m_arme;
};


#endif