🌳 ABR - Arbre Binaire de Recherche
C'est comme un arbre généalogique... mais pour les nombres !

Imagine que tu ranges des livres sur une étagère :

    À gauche : les livres avec un numéro plus petit

    À droite : les livres avec un numéro plus grand

    Au milieu : le livre de référence

🎯 Comment ça fonctionne ?

Prenons l'exemple avec des âges :
text

      25 ans
      /    \
    20      30
   /  \    /  \
  18  22  28   35

Si je cherche 22 ans :

    Je commence à 25 → 22 est plus petit ? Je vais à gauche

    J'arrive à 20 → 22 est plus grand ? Je vais à droite

    Trouvé ! ✅

🛠️ À quoi ça sert ?

Quand l'utiliser :

    Ranger une liste de contacts

    Trier des scores de jeu

    Organiser des produits par prix

Les avantages :

    ✅ Recherche ultra-rapide

    ✅ Données toujours triées

    ✅ Facile à comprendre

Les inconvénients :

    ❌ Peut devenir déséquilibré

    ❌ Moins pratique pour les doublons



🌳 Qu’est-ce qu’un Arbre Binaire de Recherche (Binary Search Tree – BST) ?

Un arbre binaire de recherche est un type d’arbre binaire utilisé pour stocker des données de manière organisée, afin de faciliter la recherche (chercher), l’insertion (insérer) et la suppression (supprimer) rapidement.

⚙️ Propriétés fondamentales d’un Arbre Binaire de Recherche

Un BST respecte 3 règles principales :

Racine (Root) → le premier nœud de l’arbre.

Sous-arbre gauche (Left Subtree) → toutes les valeurs du côté gauche sont plus petites que la valeur du nœud.

Sous-arbre droit (Right Subtree) → toutes les valeurs du côté droit sont plus grandes que la valeur du nœud.

➡️ Cette règle s’applique à chaque nœud de l’arbre, pas seulement à la racine.

🔎 Exemple simple

Supposons qu’on insère les valeurs suivantes dans un arbre binaire de recherche :

50, 30, 70, 20, 40, 60, 80

👉 L’arbre obtenu est :

        50
       /  \
     30    70
    / \    / \
  20  40  60  80


30 < 50 → va à gauche.

70 > 50 → va à droite.

20 < 30 → va à gauche de 30.

40 > 30 → va à droite de 30.

60 < 70 → va à gauche de 70.

80 > 70 → va à droite de 70.

📌 Opérations principales sur un BST

Insertion (Ajouter une valeur)

On place la nouvelle valeur à la position correcte (gauche si plus petite, droite si plus grande).

Recherche (Trouver une valeur)

On commence à la racine et on descend à gauche/droite selon la comparaison.

Suppression (Enlever une valeur)

Cas 1 : le nœud n’a pas d’enfant → on le supprime directement.

Cas 2 : le nœud a 1 enfant → l’enfant prend la place du nœud.

Cas 3 : le nœud a 2 enfants → on remplace par son successeur (ou son prédécesseur) et on ajuste l’arbre.

⏱️ Complexité

Recherche / Insertion / Suppression :

Complexité = O(h) (h = hauteur de l’arbre).

Si l’arbre est équilibré → O(log n).

Si l’arbre est déséquilibré (ressemble à une liste) → O(n).

✅ Avantages et Inconvénients
Avantages :

Recherche rapide (si équilibré).

Facile à implémenter.

Inconvénients :

Peut devenir déséquilibré → moins efficace.
