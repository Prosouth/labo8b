#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

void afficher(const int tab[], size_t taille) {
    cout << "[";
    for (size_t i = 0; i < taille; i++) {
        if (i > 0)
            cout << ", ";
        cout << tab[i];
    }
    cout << "]\n";
}

// -----------------------------------------------------------------------------
// supprimerElementsCentraux

void supprimerElementsCentraux(int tab[], size_t& taille) {
   if(taille > 0 && taille % 2 == 0)
   {
      int parcours  = taille / 2;
      taille = taille - 2;
      for(size_t i = parcours - 1; i <= taille; i++)
      {
         taille[i] = taille[i + 2];
         // ceci est un commentaire
      }
   }
}

void testSupprimerElementsCentraux(int tab[], size_t taille) {
    cout << "supprimerElementsCentraux()" << endl;
    cout << "avant: ";
    afficher(tab, taille);
    supprimerElementsCentraux(tab, taille);
    cout << "après: ";
    afficher(tab, taille);
}

void testToutSupprimerElementsCentraux() {
    int t0[0];
    int t1[] = {1};
    int t2[] = {1, 2};
    int t3[] = {1, 2, 3};
    int t4[] = {1, 2, 3, 4};
    int t5[] = {1, 2, 3, 4, 5};
    int t6[] = {1, 2, 3, 4, 5, 6};
    
    testSupprimerElementsCentraux(t0, 0);
    testSupprimerElementsCentraux(t1, 1);
    testSupprimerElementsCentraux(t2, 2);
    testSupprimerElementsCentraux(t3, 3);
    testSupprimerElementsCentraux(t4, 4);
    testSupprimerElementsCentraux(t5, 5);
    testSupprimerElementsCentraux(t6, 6);
}

// -----------------------------------------------------------------------------
// estOrdonneStrictementCroissant

bool estOrdonneStrictementCroissant(/* à compléter */) {
    // à compléter
}

void testEstOrdonneStrictementCroissant(const int tab[], size_t taille) {
    afficher(tab, taille);
    cout << (estOrdonneStrictementCroissant(tab, taille) ? " est " : " n'est pas ")
         << "ordonne de maniere strictement croissante" << endl;
}

void testToutEstOrdonneStrictementCroissant() {
    int t0[0]; // warning: ISO C++ forbids zero-size array 't0' [-pedantic]
    int t1[] = {1};
    int t2[] = {1, 2};
    int t3[] = {1, 2, 3};
    int t4[] = {1, 2, 2};
    
    testEstOrdonneStrictementCroissant(t0, 0);
    testEstOrdonneStrictementCroissant(t1, 1);
    testEstOrdonneStrictementCroissant(t2, 2);
    testEstOrdonneStrictementCroissant(t3, 3);
    testEstOrdonneStrictementCroissant(t4, 3);
}

// -----------------------------------------------------------------------------
// supprimerValeur

void supprimerValeur(/* à compléter */) {
    // à compléter
}

void testSupprimerValeur(int tab[], size_t& taille, int valeurASupprimer) {
    cout << "supprimerValeur(valeurASupprimer: " << valeurASupprimer << ")" << endl;
    cout << "avant: ";
    afficher(tab, taille);
    supprimerValeur(tab, taille, valeurASupprimer);
    cout << "après: ";
    afficher(tab, taille);
}

void testToutSupprimerValeur() {
    int t0[0];
    int t1[] = {1};
    int t2[] = {1, 2, 1, 1, 2, 1};
    
    size_t taille;
    
    taille = 0;
    testSupprimerValeur(t0, taille, 0);
    
    taille = 1;
    for (int i = 0; i <= 1; ++i) {
        testSupprimerValeur(t1, taille, i);
    }

    taille = 6;
    for (int i = 0; i <= 2; ++i) {
        testSupprimerValeur(t2, taille, i);
    }
}
                                                                                          
// -----------------------------------------------------------------------------
// supprimerDoublons

void supprimerDoublons(/* à compléter */) {
    // à compléter
}

void testSupprimerDoublons(int tab[], size_t taille) {
    cout << "supprimerDoublons()" << endl;
    cout << "avant: ";
    afficher(tab, taille);
    supprimerDoublons(tab, taille);
    cout << "après: ";
    afficher(tab, taille);
}

void testToutSupprimerDoublons() {
    int t0[0];
    int t1[] = {1};
    int t2[] = {1, 2};
    int t3[] = {1, 2, 3};
    int t4[] = {1, 1, 1};
    int t5[] = {1, 2, 1};
    int t6[] = {1, 2, 1, 2};
    int t7[] = {1, 2, 3, 1, 2, 3};
    int t8[] = {1, 2, 3, 3, 2, 1};

    testSupprimerDoublons(t0, 0);
    testSupprimerDoublons(t1, 1);
    testSupprimerDoublons(t2, 2);
    testSupprimerDoublons(t3, 3);
    testSupprimerDoublons(t4, 3);
    testSupprimerDoublons(t5, 3);
    testSupprimerDoublons(t6, 4);
    testSupprimerDoublons(t7, 6);
    testSupprimerDoublons(t8, 6);
}

// -----------------------------------------------------------------------------
// main

int main() {
    testToutSupprimerElementsCentraux();
    testToutEstOrdonneStrictementCroissant();
    testToutSupprimerValeur();
    testToutSupprimerDoublons();
    return EXIT_SUCCESS;
}