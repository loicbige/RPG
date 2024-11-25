#ifndef DEF_PERSONNAGES

#define DEF_PERSONNAGES


#include "Arme.hpp"
#include "Pouvoirs.hpp"


class Personnage
{
public:

    Personnage();
    Personnage(std::string nom,std::string nomArme, int degatsArme);

    void afficherEtats() const;
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void attaquerMagique(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;


private:

    // Atributs
    std::string m_nom;
    int m_vie;
    int m_mana;
    Arme m_arme;
};


#endif