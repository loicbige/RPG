#include "Arme.hpp"
#include <iostream>

using namespace std;


Arme::Arme() : m_nom("Epée en bois"), m_degats(5)
{

}

Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats)
{

}


void Arme::changer(string nouveauNom, int degats) {

    m_nom = nouveauNom;
    m_degats = degats;
}

void Arme::afficher() const {
    cout << m_nom << "Inflige " << m_degats << " points de vie." << endl;
} 


string Arme::getNom() const {
    return m_nom;
}

int Arme::getDegats() const {
    return m_degats;
}


