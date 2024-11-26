//
// Created by bgl4909a on 11/25/24.
//

#include "Pouvoirs.hpp"

using namespace std;

// Constructeur :

Pouvoirs::Pouvoirs() : m_coutMana(10), m_nomSort("Boule de feu"), m_Ap(25)
{

}
Pouvoirs::Pouvoirs(int coutMana, string nomSort, int Ap) : m_nomSort(nomSort), m_Ap(Ap)
{

}

void Pouvoirs::changerSort(string newSort, int degatSort) {
    m_nomSort = newSort;
    m_Ap = degatSort;
}

// GET

string Pouvoirs::getSort() const {
    return m_nomSort;
}

int Pouvoirs::getAp() const {
    return m_Ap;
}

int Pouvoirs::getManaCost() const {
    return m_coutMana;
}