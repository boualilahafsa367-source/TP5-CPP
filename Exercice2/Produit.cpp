#include "Produit.hpp"

// Initialisation du taux de TVA à 20 %.
float Produit::tauxTVA = 20.0f;

// Initialise le nom et le prix hors taxe du produit.
Produit::Produit(const std::string& n, float prix)
    : nom(n), prixHT(prix) {
}

// Calcule le prix TTC avec le taux de TVA partagé.
float Produit::getPrixTTC() const {
    return prixHT * (1 + tauxTVA / 100);
}

// Modifie le taux de TVA pour tous les produits.
void Produit::modifierTVA(float nouveauTaux) {
    if (nouveauTaux >= 0) {
        tauxTVA = nouveauTaux;
    }
}