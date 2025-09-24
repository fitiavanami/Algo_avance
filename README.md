# Algo_avance

Arbre Rouge Noir(RN)
Arbre rouge et noir
Un arbre binaire de recherche est un arbre rouge et noir s’il satisfait les propri´et´es
suivantes :
1. Chaque noeud est soit rouge, soit noir.
2. Chaque feuille (Nil) est noire.
3. Si un noeud est rouge alors ses deux fils sont noirs.
4. Tous les chemins descendants qui relie un noeud donne a une feuille (du sous-arbre
dont il est la racine) contiennent le meme nombre de noeuds noirs.


📘 Algo_avancé
🔴⚫ Arbre Rouge et Noir (Red-Black Tree)

Un arbre rouge-noir est un arbre binaire de recherche équilibré qui garantit une hauteur logarithmique grâce à l’ajout d’une couleur (rouge ou noir) sur chaque nœud.

✅ Propriétés (rappel)

Chaque nœud est soit rouge, soit noir.

Chaque feuille (Nil) est noire.

Si un nœud est rouge, alors son père et ses deux fils doivent être noirs.

Tous les chemins d’un nœud à une feuille contiennent le même nombre de nœuds noirs.

🌳 Conséquences

Empêche l’arbre de devenir trop déséquilibré.

La hauteur de l’arbre est O(log n).

Les opérations de recherche, insertion et suppression sont efficaces.

⚙️ Opérations principales
🔎 Recherche

Identique à un arbre binaire de recherche classique (BST).

Complexité : O(log n).

➕ Insertion

On insère le nœud comme dans un BST normal.

Le nouveau nœud est toujours rouge.

Si les propriétés de l’arbre sont violées (par exemple : deux nœuds rouges consécutifs), on applique une procédure de rééquilibrage :

Rotation gauche ou droite.

Recoloration (changer rouge ↔ noir).

👉 Cette procédure est appelée Insertion Fix-Up.
