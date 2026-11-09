#include <iostream>
#include "Boite.hpp"

using namespace std;

int main() {
    cout << "===== GESTION DES BOITES =====" << endl;

    // Creation de deux premieres boites.
    Boite b1(12.5, 8.0, 4.0);
    cout << "Apres creation de la boite 1 : "
         << Boite::getNombreBoites() << endl;

    Boite b2(6.4, 5.2, 3.1);
    cout << "Apres creation de la boite 2 : "
         << Boite::getNombreBoites() << endl;

    {
        // Cette boite existe uniquement dans ce bloc.
        Boite b3(9.3, 7.1, 2.8);

        cout << "Apres creation de la boite 3 : "
             << Boite::getNombreBoites() << endl;
    }

    // b3 est detruite automatiquement a la fin du bloc.
    cout << "Apres destruction de la boite 3 : "
         << Boite::getNombreBoites() << endl;

    return 0;
}