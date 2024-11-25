//
// Created by bgl4909a on 11/25/24.
//

#include "Pouvoirs.hpp"

using namespace std;

// Constructeur :

Pouvoirs::Pouvoirs(int mana) : m_mana(mana), m_nomSort("Turbulance magique"), m_Ap(1)
{

}
Pouvoirs::Pouvoirs(int mana, string nomSort, int Ap) : m_mana(mana), m_nomSort(nomSort), m_Ap(Ap)
{

}



int Pouvoirs::getAp() const {
    return m_Ap;
}