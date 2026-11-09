#include "Boite.hpp"

// Initialisation du compteur statique.
int Boite::nbBoites = 0;

// Le constructeur augmente le compteur à chaque création.
Boite::Boite(double l, double la, double h)
    : longueur(l), largeur(la), hauteur(h) {
    nbBoites++;
}

// Le destructeur diminue le compteur à chaque destruction.
Boite::~Boite() {
    nbBoites--;
}

// Retourne le nombre actuel de boîtes existantes.
int Boite::getNombreBoites() {
    return nbBoites;
}