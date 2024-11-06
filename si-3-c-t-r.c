Exercice 5 : Vérifier si trois côtés peuvent former un triangle rectangle
Pour vérifier si trois côtés peuvent former un triangle rectangle, nous devons comprendre les concepts de base des triangles et le théorème de Pythagore. Voici une explication détaillée :

Concepts de Base
Triangle Rectangle
Un triangle rectangle est un triangle qui a un angle droit (90 degrés). Dans ce type de triangle, les longueurs des côtés doivent respecter une relation spécifique.
Théorème de Pythagore
Le théorème de Pythagore stipule que, dans un triangle rectangle, le carré de la longueur du côté opposé à l'angle droit (appelé l'hypoténuse) est égal à la somme des carrés des longueurs des deux autres côtés.
Mathématiquement, si 
�
a, 
�
b et 
�
c sont les longueurs des côtés, avec 
�
c étant l'hypoténuse, alors : 
�
2
=
�
2
+
�
2
c 
2
 =a 
2
 +b 
2
 
Objectif de l'Exercice
L'objectif est de déterminer si trois longueurs données peuvent former un triangle rectangle. Pour cela, nous allons suivre certaines étapes :

Étapes de Vérification
Entrées :

Trois longueurs de côtés : 
�
a, 
�
b, et 
�
c.
Identification de l'Hypoténuse :

Identifier la plus grande des trois longueurs, car elle doit être l'hypoténuse dans un triangle rectangle.
Les deux autres longueurs seront considérées comme les côtés adjacents.
Application du Théorème de Pythagore :

Vérifier si la relation du théorème de Pythagore est respectée :
Si 
�
c est l'hypoténuse, vérifier si : 
�
2
=
�
2
+
�
2
c 
2
 =a 
2
 +b 
2
 
Si 
�
b est l'hypoténuse, vérifier si : 
�
2
=
�
2
+
�
2
b 
2
 =a 
2
 +c 
2
 
Si 
�
a est l'hypoténuse, vérifier si : 
�
2
=
�
2
+
�
2
a 
2
 =b 
2
 +c 
2
 
Retourner le Résultat :

Si l'une des conditions ci-dessus est vraie, alors les trois longueurs peuvent former un triangle rectangle.
Sinon, elles ne peuvent pas former un triangle rectangle.
Exemple de Fonctionnement
Prenons les longueurs 
�
=
3
a=3, 
�
=
4
b=4, et 
�
=
5
c=5.

Identifier l'hypoténuse : ici, 
�
=
5
c=5 est la plus grande longueur.
Appliquer le théorème de Pythagore :
Calculer : 
5
2
=
3
2
+
4
2
5 
2
 =3 
2
 +4 
2
 
Cela donne : 
25
=
9
+
16
(ce qui est vrai)
25=9+16(ce qui est vrai)
Conclusion : Les longueurs 3, 4 et 5 peuvent former un triangle rectangle.
Conclusion
Vérifier si trois côtés peuvent former un triangle rectangle est un exercice utile pour comprendre la géométrie et les relations entre les longueurs des côtés d'un triangle. Cela implique des compétences en mathématiques, notamment la compréhension des carrés et des racines carrées, ainsi que l'application de conditions logiques pour déterminer le résultat.
Algorithme
Fonction Triangle
Entrée : trois nombres a, b, c
Sortie : vrai si les côtés peuvent former un triangle rectangle, faux sinon
Calculer a2 = a * a, b2 = b * b, c2 = c * c
Si a2 == b2 + c2 ou b2 == a2 + c2 ou c2 == a2 + b2 alors
Retourner vrai
Sinon
Retourner faux
Code C
Copier
#include <stdio.h>

int Triangle(int a, int b, int c) {
    int a2 = a * a;
    int b2 = b * b;
    int c2 = c * c;

    return (a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2);
}

int main() {
    int a = 3, b = 4, c = 5;
    if (Triangle(a, b, c)) {
        printf("Les côtés %d, %d et %d peuvent former un triangle rectangle.\n", a, b, c);
    } else {
        printf("Les côtés %d, %d et %d ne peuvent pas former un triangle rectangle.\n", a, b, c);
    }
    return 0;
}


Voici l'algorithme écrit de manière structurée, incluant une procédure pour vérifier si trois longueurs peuvent former un triangle rectangle :

Algorithme : Vérifier si trois côtés peuvent former un triangle rectangle
Début

Procédure EstTriangleRectangle(a, b, c)

Entrées : Trois longueurs 
�
a, 
�
b, 
�
c
Sortie : Booléen (Vrai si les longueurs peuvent former un triangle rectangle, Faux sinon)
Début de la procédure
Si 
�
a est le plus grand, alors
hypot
e
ˊ
nuse
←
�
hypot 
e
ˊ
 nuse←a
c
o
ˆ
t
e
ˊ
1
←
�
c 
o
ˆ
 t 
e
ˊ
 1←b
c
o
ˆ
t
e
ˊ
2
←
�
c 
o
ˆ
 t 
e
ˊ
 2←c
Sinon, si 
�
b est le plus grand, alors
hypot
e
ˊ
nuse
←
�
hypot 
e
ˊ
 nuse←b
c
o
ˆ
t
e
ˊ
1
←
�
c 
o
ˆ
 t 
e
ˊ
 1←a
c
o
ˆ
t
e
ˊ
2
←
�
c 
o
ˆ
 t 
e
ˊ
 2←c
Sinon
hypot
e
ˊ
nuse
←
�
hypot 
e
ˊ
 nuse←c
c
o
ˆ
t
e
ˊ
1
←
�
c 
o
ˆ
 t 
e
ˊ
 1←a
c
o
ˆ
t
e
ˊ
2
←
�
c 
o
ˆ
 t 
e
ˊ
 2←b
Si 
hypot
e
ˊ
nuse
2
=
c
o
ˆ
t
e
ˊ
1
2
+
c
o
ˆ
t
e
ˊ
2
2
hypot 
e
ˊ
 nuse 
2
 =c 
o
ˆ
 t 
e
ˊ
 1 
2
 +c 
o
ˆ
 t 
e
ˊ
 2 
2
  alors
Retourner Vrai
Sinon
Retourner Faux
Fin de la procédure
Programme Principal

Lire 
�
a
Lire 
�
b
Lire 
�
c
Si EstTriangleRectangle(a, b, c) alors
Afficher "Les longueurs peuvent former un triangle rectangle."
Sinon
Afficher "Les longueurs ne peuvent pas former un triangle rectangle."
Fin

Exemple d'Exécution
Entrées : 
�
=
3
a=3, 
�
=
4
b=4, 
�
=
5
c=5
Appel de la procédure : EstTriangleRectangle(3, 4, 5)
Vérification : 
5
2
=
3
2
+
4
2
5 
2
 =3 
2
 +4 
2
  → 
25
=
9
+
16
25=9+16 (vrai)
Sortie : "Les longueurs peuvent former un triangle rectangle."
Cet algorithme est structuré et utilise une procédure distincte pour encapsuler la logique de vérification, ce qui le rend modulaire et facile à comprendre.