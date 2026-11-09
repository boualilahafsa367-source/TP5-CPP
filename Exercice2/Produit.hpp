#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <string>

class Produit {
private:
    std::string nom;
    float prixHT;

    // Taux commun à tous les produits : 20 %.
    static float tauxTVA;

public:
    Produit(const std::string& n, float prix);

    float getPrixTTC() const;

    static void modifierTVA(float nouveauTaux);
};

#endif