#include "Personnages.hpp"

#include <iostream>


using namespace std;


Personnage::Personnage() : m_vie(100), m_mana(100), m_arme("Epée en bois", 5), m_nom("Gladiateur"){
}

Personnage::Personnage(string nom, string nomArme, int degatsArme) : m_vie(100), m_mana(100), m_arme(nomArme, degatsArme), m_nom(nom) {
    
}


void Personnage::recevoirDegats(int nbDegats) 
{

// Déduit la vie du personnage

m_vie -= nbDegats;

if (m_vie < 0) {
    
    m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible) {
    cible.recevoirDegats(m_arme.getDegats());

}

void Personnage::attaquerMagique(Personnage &cible) {
    cible.recevoirDegats(m_sort.getAp());
}

void Personnage::boirePotionDeVie(int quantitePotion) 
{
    
    m_vie += quantitePotion;

    if(m_vie > 100) {
        m_vie = 100;

    }

}


void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme) {

   m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const {
    return m_vie > 0;
}

void Personnage::afficherEtats() const {
 cout << m_nom << endl;
 cout << m_vie << "points de vie." << endl;
 cout << m_mana << "points de mana." << endl;
 m_arme.afficher();
}


