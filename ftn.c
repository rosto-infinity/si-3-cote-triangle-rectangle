#include <iostream>
#include <vector>

using namespace std;

// Fonction pour trier un tableau avec l'algorithme de tri à bulles
void tri_a_bulles(vector<int>& Tab) {
    int n = Tab.size();
    int temp;

    // Parcours du tableau de n à 1
    for (int i = n; i > 1; i--) {
        // Parcours de 2 à i
        for (int j = 1; j < i; j++) {
            // Comparaison et échange si nécessaire
            if (Tab[j - 1] > Tab[j]) {
                // Échange des éléments
                temp = Tab[j - 1];
                Tab[j - 1] = Tab[j];
                Tab[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Demander à l'utilisateur la taille du tableau
    cout << "Entrez le nombre d'éléments dans le tableau : ";
    cin >> n;

    vector<int> Tab(n);

    // Récupérer les éléments du tableau
    cout << "Entrez " << n << " entiers : ";
    for (int i = 0; i < n; i++) {
        cin >> Tab[i];
    }

    // Appeler la fonction de tri
    tri_a_bulles(Tab);

    // Afficher le tableau trié
    cout << "Tableau trié : ";
    for (int i = 0; i < n; i++) {
        cout << Tab[i] << " ";
    }
    cout << endl;

    return 0;
}
