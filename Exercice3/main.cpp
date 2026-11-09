#include <iostream>
#include "Utilisateur.hpp"

using namespace std;

int main() {
    cout << "===== GESTION DES SESSIONS =====" << endl;

    cout << "\nNombre initial : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    {
        // Connexion du premier utilisateur.
        Utilisateur u1("Zineb", "admin");
        cout << "Apres connexion de Zineb : "
             << Utilisateur::getNbUtilisateursConnectes() << endl;

        // Connexion du deuxieme utilisateur.
        Utilisateur u2("Yassmine", "visiteur");
        cout << "Apres connexion de Yassmine : "
             << Utilisateur::getNbUtilisateursConnectes() << endl;

        {
            // Connexion du troisieme utilisateur.
            Utilisateur u3("Sara", "moderateur");
            cout << "Apres connexion de Sara : "
                 << Utilisateur::getNbUtilisateursConnectes() << endl;
        }

        // Sara est deconnectee a la fin de son bloc.
        cout << "Apres deconnexion de Sara : "
             << Utilisateur::getNbUtilisateursConnectes() << endl;
    }

    // Zineb et Yassmine sont deconnectes a la fin du bloc.
    cout << "Apres deconnexion de tous les utilisateurs : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    return 0;
}