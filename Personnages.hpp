#ifndef DEF_PERSONNAGES

#define DEF_PERSONNAGES


#include "Arme.hpp"
#include "Pouvoirs.hpp"


class Personnage
{
public:

    Personnage();
    Personnage(std::string nom,std::string nomArme, int degatsArme);
    Personnage(string nom, string nomSort, int degatAp, int coutMana);

    void afficherEtats() const;
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void attaquerMagique(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    void changerSort(std::string nomNouveauSort, int degatNouveauSort);
    bool estVivant() const;


private:

    // Atributs
    std::string m_nom;
    int m_vie;
    int m_mana;
    Arme m_arme;
    Pouvoirs m_sort; 
};


#endif