Exercice 5 : Vérifier si trois côtés peuvent former un triangle rectangle
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