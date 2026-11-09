# Exercice 1 : Compteur d’objets

Figure 1 : Résultat de la compilation et de l'exécution de l'exercice 1
<img width="1920" height="561" alt="Screenshot (1255)" src="https://github.com/user-attachments/assets/8475ca3c-73cd-4046-8b3c-99ac551237ab" />

Dans cet exercice, nous avons créé une classe Boite contenant trois attributs privés : longueur, largeur et hauteur.
Nous avons ajouté un attribut statique nbBoites pour compter les objets actuellement existants. 
Le constructeur incrémente ce compteur à chaque création, tandis que le destructeur le décrémente à chaque destruction.
La méthode statique getNombreBoites() permet de consulter le nombre de boîtes sans créer d'objet supplémentaire.
Nous avons testé le programme avec trois boîtes et utilisé un bloc pour provoquer automatiquement la destruction de la troisième.
Le résultat confirme que le compteur passe de 0 à 3, puis revient à 2 après cette destruction.


# Exercice 2 : Taux de TVA partagé

Figure 2 : Résultat de la compilation et de l'exécution de l'exercice 2
<img width="1920" height="678" alt="Screenshot (1256)" src="https://github.com/user-attachments/assets/c56a0a6c-222c-4b03-a7b4-af3b641cb0f4" />

Dans cet exercice, nous avons développé une classe Produit contenant un nom, un prix hors taxe et un attribut statique tauxTVA, initialisé à 20 %.
Nous avons implémenté la méthode getPrixTTC() pour calculer le prix toutes taxes comprises à partir du taux partagé.
La méthode statique modifierTVA() permet de modifier ce taux pour tous les produits simultanément.
Nous avons créé trois produits avec des prix différents, puis affiché leurs prix TTC avant et après la modification du taux à 18,5 %. 
Le résultat montre que les prix TTC sont automatiquement recalculés avec le nouveau taux, sans modifier les objets individuellement.


# Exercice 3 : Gestion des sessions utilisateurs

Figure 3 : Résultat de la compilation et de l'exécution de l'exercice 3
<img width="1920" height="682" alt="Screenshot (1257)" src="https://github.com/user-attachments/assets/81771a86-aa73-479b-9985-c69de5f5a30f" />

Dans cet exercice, nous avons créé une classe Utilisateur contenant un nom et un rôle.
Nous avons ajouté un attribut statique privé nbUtilisateursConnectes pour suivre le nombre d'utilisateurs actuellement connectés.
Le constructeur incrémente le compteur lors de la création d'un utilisateur, tandis que le destructeur le décrémente lors de sa destruction. 
La méthode statique getNbUtilisateursConnectes() permet de consulter le nombre de connexions.
Nous avons simulé la connexion de trois utilisateurs (Zineb, Yassmine et Sara), puis leurs déconnexions à l'aide de blocs.
Le résultat confirme que le compteur augmente à chaque connexion et revient à zéro après la déconnexion de tous les utilisateurs.
