#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    // Vecteurs pour stocker les valeurs et les fils gauche/droit de chaque nœud
    vector<int> valeurs, fils_gauche, fils_droit;

    // Racine de l'arbre (-1 signifie arbre vide)
    int racine = -1;

    // ---------------#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> valeurs, fils_gauche, fils_droit;
    int racine = -1;

    // --------------------------
    // 1) Construction de l’arbre
    // --------------------------
    int nombres[] = {50, 30, 70, 20, 40, 60, 80};
    for (int x : nombres) {
        if (racine == -1) { 
            racine = 0; 
            valeurs.push_back(x); 
            fils_gauche.push_back(-1); 
            fils_droit.push_back(-1); 
            continue; 
        }
        int courant = racine;
        while (true) {
            if (x < valeurs[courant]) {
                if (fils_gauche[courant] == -1) {
                    int n = valeurs.size();
                    valeurs.push_back(x);
                    fils_gauche.push_back(-1);
                    fils_droit.push_back(-1);
                    fils_gauche[courant] = n;
                    break;
                } else courant = fils_gauche[courant];
            } else if (x > valeurs[courant]) {
                if (fils_droit[courant] == -1) {
                    int n = valeurs.size();
                    valeurs.push_back(x);
                    fils_gauche.push_back(-1);
                    fils_droit.push_back(-1);
                    fils_droit[courant] = n;
                    break;
                } else courant = fils_droit[courant];
            } else break;
        }
    }

    // --------------------------
    // 2) Recherche avec condition ternaire
    // --------------------------
    int recherches[] = {60, 25};
    for (int cible : recherches) {
        int courant = racine;
        bool trouve = false;
        while (courant != -1) {
            if (valeurs[courant] == cible) { trouve = true; break; }
            courant = (cible < valeurs[courant] ? fils_gauche[courant] : fils_droit[courant]);
        }
        cout << cible << (trouve ? " est présent" : " est absent") << " dans l’arbre." << endl;
    }

    // --------------------------
    // 3) Parcours infixe
    // --------------------------
    cout << "Parcours infixe : ";
    stack<int> pile;
    int courant = racine;
    while (courant != -1 || !pile.empty()) {
        while (courant != -1) { pile.push(courant); courant = fils_gauche[courant]; }
        courant = pile.top(); pile.pop();
        cout << valeurs[courant] << " ";
        courant = fils_droit[courant];
    }
    cout << endl;

    // --------------------------
    // 4) Structure interne
    // --------------------------
    cout << "\nStructure interne (index : valeur, gauche, droite)\n";
    for (int i = 0; i < (int)valeurs.size(); i++)
        cout << i << " : " << valeurs[i] << " , " << fils_gauche[i] << " , " << fils_droit[i] << endl;

    return 0;
}
-----------
    // 1) Construction de l’arbre
    // --------------------------
    int nombres[] = {50, 30, 70, 20, 40, 60, 80};
    for (int x : nombres) {
        if (racine == -1) { 
            // Création de la racine si l’arbre est vide
            racine = 0; 
            valeurs.push_back(x); 
            fils_gauche.push_back(-1); 
            fils_droit.push_back(-1); 
            continue; 
        }

        int courant = racine;
        while (true) {
            if (x < valeurs[courant]) {
                // Descendre à gauche
                if (fils_gauche[courant] == -1) {
                    // Ajouter le nœud gauche
                    int n = valeurs.size();
                    valeurs.push_back(x);
                    fils_gauche.push_back(-1);
                    fils_droit.push_back(-1);
                    fils_gauche[courant] = n;
                    break;
                } else courant = fils_gauche[courant];
            } else if (x > valeurs[courant]) {
                // Descendre à droite
                if (fils_droit[courant] == -1) {
                    // Ajouter le nœud à droite
                    int n = valeurs.size();
                    valeurs.push_back(x);
                    fils_gauche.push_back(-1);
                    fils_droit.push_back(-1);
                    fils_droit[courant] = n;
                    break;
                } else courant = fils_droit[courant];
            } else break; // Valeur déjà présente
        }
    }

    // --------------------------
    // 2) Recherche dans l’arbre
    // --------------------------
    int recherches[] = {60, 25};
    for (int cible : recherches) {
        int courant = racine;
        bool trouve = false;
        while (courant != -1) {
            if (valeurs[courant] == cible) { trouve = true; break; }
            // Descendre à gauche ou droite selon la valeur cible
            courant = (cible < valeurs[courant] ? fils_gauche[courant] : fils_droit[courant]);
        }
        // Affichage du résultat
        cout << cible << (trouve ? " est présent" : " est absent") << " dans l’arbre." << endl;
    }

    // --------------------------
    // 3) Parcours infixe (tri croissant)
    // --------------------------
    cout << "Parcours infixe : ";
    stack<int> pile;
    int courant = racine;
    while (courant != -1 || !pile.empty()) {
        while (courant != -1) { pile.push(courant); courant = fils_gauche[courant]; }
        courant = pile.top(); pile.pop();
        cout << valeurs[courant] << " ";
        courant = fils_droit[courant];
    }
    cout << endl;

    // --------------------------
    // 4) Affichage de la structure interne
    // --------------------------
    cout << "\nStructure interne (index : valeur, gauche, droite)\n";
    for (int i = 0; i < (int)valeurs.size(); i++)
        cout << i << " : " << valeurs[i] << " , " << fils_gauche[i] << " , " << fils_droit[i] << endl;

    return 0;
}
