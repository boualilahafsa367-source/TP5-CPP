#include <iostream>
#include <iomanip>
#include "Produit.hpp"

using namespace std;

int main() {
    cout << "===== GESTION DES PRIX TTC =====" << endl;

    // Creation de trois produits.
    Produit p1("Lampe solaire", 179.50f);
    Produit p2("Clavier compact", 249.90f);
    Produit p3("Support aluminium", 89.75f);

    cout << fixed << setprecision(2);

    // Affichage des prix avec la TVA initiale de 20 %.
    cout << "\n--- TVA initiale : 20 % ---" << endl;
    cout << "Lampe solaire : " << p1.getPrixTTC() << " DH" << endl;
    cout << "Clavier compact : " << p2.getPrixTTC() << " DH" << endl;
    cout << "Support aluminium : " << p3.getPrixTTC() << " DH" << endl;

    // Modification du taux commun.
    Produit::modifierTVA(18.5f);

    // Affichage des prix avec le nouveau taux.
    cout << "\n--- Nouvelle TVA : 18.5 % ---" << endl;
    cout << "Lampe solaire : " << p1.getPrixTTC() << " DH" << endl;
    cout << "Clavier compact : " << p2.getPrixTTC() << " DH" << endl;
    cout << "Support aluminium : " << p3.getPrixTTC() << " DH" << endl;

    return 0;
}