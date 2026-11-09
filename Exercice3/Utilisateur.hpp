#ifndef UTILISATEUR_HPP
#define UTILISATEUR_HPP

#include <string>

class Utilisateur {
private:
    std::string nom;
    std::string role;

    // Nombre d'utilisateurs actuellement connectes.
    static int nbUtilisateursConnectes;

public:
    Utilisateur(const std::string& n, const std::string& r);
    ~Utilisateur();

    static int getNbUtilisateursConnectes();
};

#endif