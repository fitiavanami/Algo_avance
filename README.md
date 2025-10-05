 Arbre Binaire de Recherche (ABR / Binary Search Tree – BST)

Un **Arbre Binaire de Recherche (ABR)** est une structure de données qui permet de **stocker, rechercher, insérer et supprimer** des éléments de manière rapide et organisée.  
On peut le comparer à un **annuaire** ou une **bibliothèque triée**.

---

 Sommaire
1. [Définition](#-définition)  
2. [Propriétés fondamentales](#-propriétés-fondamentales)  
3. [Exemple simple](#-exemple-simple)  
4. [Opérations principales](#-opérations-principales)  
5. [Complexité](#-complexité)  
6. [Avantages et Inconvénients](#-avantages-et-inconvénients)  
7. [Variantes d’ABR](#-variantes-dabr)  

---

 Définition
Un **ABR** est un arbre binaire où :  
- Les valeurs dans le **sous-arbre gauche** sont **plus petites** que la valeur du nœud.  
- Les valeurs dans le **sous-arbre droit** sont **plus grandes** que la valeur du nœud.  
- Cette règle s’applique **à chaque nœud** de l’arbre.  

---

 Propriétés fondamentales
- **Racine (Root)** : le premier nœud de l’arbre.  
- **Sous-arbre gauche** : contient uniquement des valeurs **inférieures**.  
- **Sous-arbre droit** : contient uniquement des valeurs **supérieures**.  

---

 Exemple simple
Insertion des valeurs : **50, 30, 70, 20, 40, 60, 80**

```
        50
       /  \
     30    70
    / \    / \
  20  40  60  80
```

---

 Opérations principales

 1. Insertion
- On compare la valeur à insérer avec la racine.  
- On descend à gauche ou à droite jusqu’à trouver la bonne position.  

 2. Recherche
- On commence à la racine.  
- Si la valeur est plus petite → aller à gauche.  
- Si elle est plus grande → aller à droite.  

 3. Suppression
- **Cas 1 :** pas d’enfant → suppression directe.  
- **Cas 2 :** 1 enfant → l’enfant remplace le nœud.  
- **Cas 3 :** 2 enfants → remplacer par le **successeur** ou le **prédécesseur**.  

---

 Complexité
- Recherche / Insertion / Suppression : **O(h)** (h = hauteur de l’arbre).  
- Si équilibré : **O(log n)**  
- Si déséquilibré (ressemble à une liste) : **O(n)**  

---

 Avantages et Inconvénients
Avantages :
- Recherche et insertion rapides (si équilibré).  
- Données toujours triées.  
- Implémentation simple.  

Inconvénients :
- Peut devenir déséquilibré → perte d’efficacité.  
- Moins pratique pour les doublons.  

---

## 🌲 Variantes d’ABR
- **AVL Tree** → toujours équilibré, rotation automatique.  
- **Red-Black Tree** → utilisé dans les bases de données et systèmes de fichiers.  
- **Splay Tree** → amène les éléments souvent utilisés vers la racine.  
