
#include <stdio.h>
#include <math.h>


int estTriangleRectangle(double a, double b, double c) {
    double hypotenuse, cote1, cote2;

    // Identifier l'hypotenuse et les autres côtés
    if (a >= b && a >= c) {
        hypotenuse = a;
        cote1 = b;
        cote2 = c;
    }
    else if (b >= a && b >= c) {
        hypotenuse = b;
        cote1 = a;
        cote2 = c;
    }
    else {
        hypotenuse = c;
        cote1 = a;
        cote2 = b;
    }

    // Vérifier la relation de Pythagore
    if (hypotenuse * hypotenuse == cote1 * cote1 + cote2 * cote2) {
        return 1; // Vrai
    }
    else {
        return 0; // Faux
    }
}

int main() {
    double a, b, c;

    // Lire les longueurs des côtés
    printf("Entrez la longueur du cote a : ");
    scanf("%lf", &a);
    printf("Entrez la longueur du cote b : ");
    scanf("%lf", &b);
    printf("Entrez la longueur du cote c : ");
    scanf("%lf", &c);

    // Vérifier si les longueurs peuvent former un triangle rectangle
    if (estTriangleRectangle(a, b, c)) {
        printf("Les longueurs peuvent former un triangle rectangle.\n");
    }
    else {
        printf("Les longueurs ne peuvent pas former un triangle rectangle.\n");
    }

    return 0;
}
