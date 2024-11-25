//
// Created by bgl4909a on 11/25/24.
//

#ifndef POUVOIRS_HPP
#define POUVOIRS_HPP

#include <string>

class Pouvoirs {

// Méthodes;
public:
    Pouvoirs(int mana);
    Pouvoirs(int mana, std::string nomSort, int Ap);



    int getAp() const;
// Attributs


private :

std::string m_nomSort;
int m_Ap;
int m_mana;

};



#endif //POUVOIRS_HPP
