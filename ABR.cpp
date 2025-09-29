#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    // Chaque nœud est représenté par un index dans trois tableaux parallèles :
    // - valeurs[i] : contient la valeur du nœud i
    // - fils_gauche[i] : index du fils gauche de i (-1 si aucun)
    // - fils_droit[i] : index du fils droit de i (-1 si aucun)

    vector<int> valeurs;
    vector<int> fils_gauche;
    vector<int> fils_droit;

    int racine = -1; // -1 signifie que l’arbre est vide

    // --------------------------
    // 1) Construction de l’arbre
    // --------------------------
    int nombres_a_inserer[] = {50, 30, 70, 20, 40, 60, 80};
    int taille = sizeof(nombres_a_inserer) / sizeof(nombres_a_inserer[0]);

    for (int i = 0; i < taille; i++) {
        int x = nombres_a_inserer[i];

        // Si l’arbre est vide, on crée la racine
        if (racine == -1) {
            racine = 0;
            valeurs.push_back(x);
            fils_gauche.push_back(-1);
            fils_droit.push_back(-1);
            continue;
        }

        // Sinon, on descend dans l’arbre pour trouver la bonne place
        int courant = racine;
        while (true) {
            if (x < valeurs[courant]) {
                // Aller à gauche
                if (fils_gauche[courant] == -1) {
                    int nouvel_index = valeurs.size();
                    valeurs.push_back(x);
                    fils_gauche.push_back(-1);
                    fils_droit.push_back(-1);
                    fils_gauche[courant] = nouvel_index;
                    break;
                } else {
                    courant = fils_gauche[courant];
                }
            } else if (x > valeurs[courant]) {
                // Aller à droite
                if (fils_droit[courant] == -1) {
                    int nouvel_index = valeurs.size();
                    valeurs.push_back(x);
                    fils_gauche.push_back(-1);
                    fils_droit.push_back(-1);
                    fils_droit[courant] = nouvel_index;
                    break;
                } else {
                    courant = fils_droit[courant];
                }
            } else {
                // Si la valeur existe déjà, on ne fait rien
                break;
            }
        }
    }

    // --------------------------
    // 2) Recherche dans l’arbre
    // --------------------------
    int valeurs_a_rechercher[] = {60, 25};
    int nb_recherches = sizeof(valeurs_a_rechercher) / sizeof(valeurs_a_rechercher[0]);

    for (int i = 0; i < nb_recherches; i++) {
        int cible = valeurs_a_rechercher[i];
        bool trouve = false;
        int courant = racine;

        while (courant != -1) {
            if (cible == valeurs[courant]) {
                trouve = true;
                break;
            } else if (cible < valeurs[courant]) {
                courant = fils_gauche[courant];
            } else {
                courant = fils_droit[courant];
            }
        }

        if (trouve)
            cout << cible << " est présent dans l’arbre." << endl;
        else
            cout << cible << " est absent de l’arbre." << endl;
    }

    // --------------------------
    // 3) Parcours infixe (in-order)
    // --------------------------
    cout << "Parcours infixe (tri croissant) : ";
    stack<int> pile;
    int courant = racine;

    while (courant != -1 || !pile.empty()) {
        while (courant != -1) {
            pile.push(courant);
            courant = fils_gauche[courant];
        }
        courant = pile.top(); pile.pop();
        cout << valeurs[courant] << " ";
        courant = fils_droit[courant];
    }
    cout << endl;

    // --------------------------
    // 4) Affichage de la structure interne
    // --------------------------
    cout << "\nStructure interne de l’arbre (index : valeur, gauche, droite)" << endl;
    for (int i = 0; i < (int)valeurs.size(); i++) {
        cout << i << " : " << valeurs[i] 
             << " , " << fils_gauche[i] 
             << " , " << fils_droit[i] << endl;
    }

    return 0;
}

