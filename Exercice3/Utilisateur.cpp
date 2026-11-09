#include "Utilisateur.hpp"

// Initialisation du compteur statique.
int Utilisateur::nbUtilisateursConnectes = 0;

// La creation d'un utilisateur represente sa connexion.
Utilisateur::Utilisateur(const std::string& n, const std::string& r)
    : nom(n), role(r) {
    nbUtilisateursConnectes++;
}

// La destruction de l'objet represente sa deconnexion.
Utilisateur::~Utilisateur() {
    nbUtilisateursConnectes--;
}

// Retourne le nombre actuel d'utilisateurs connectes.
int Utilisateur::getNbUtilisateursConnectes() {
    return nbUtilisateursConnectes;
}