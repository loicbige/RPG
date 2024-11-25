//
// Created by bgl4909a on 11/25/24.
//

#ifndef POUVOIRS_HPP
#define POUVOIRS_HPP

#include <string>

class Pouvoirs {

// Méthodes;
public:
    Pouvoirs();
    Pouvoirs(int coutMana, std::string nomSort, int Ap);


    void changerSort(std::string newSort, int degatSort)
    std::string getSort() const;
    int getAp() const;
    int getManaCost() const;
// Attributs


private :

std::string m_nomSort;
int m_Ap;
int m_coutMana;

};



#endif //POUVOIRS_HPP
