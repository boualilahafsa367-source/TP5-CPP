#ifndef BOITE_HPP
#define BOITE_HPP

class Boite {
private:
    double longueur;
    double largeur;
    double hauteur;

    // Compteur commun à tous les objets Boite.
    static int nbBoites;

public:
    Boite(double l, double la, double h);
    ~Boite();

    static int getNombreBoites();
};

#endif