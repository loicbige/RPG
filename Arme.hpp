#ifndef DEF_ARME

#define DEF_ARME

#include <string>
class Arme 
{
    
    // Méthodes
    public:


    Arme();
    Arme(std::string nom, int degats);
    void changer(std::string nouveauNom, int degats);
    void afficher() const;
    std::string getNom() const;
    int getDegats() const;

    // Atributs

    private:

    std::string m_nom;
    int m_degats;
};



#endif