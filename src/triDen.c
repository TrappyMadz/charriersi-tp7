// Inclusions
#include <stdio.h>
#include <stdlib.h>

# include "triDen.h"

// Définitions
#define ERREUR -1

void minMaxTableau (int* tab, int taille, int* min, int* max)
{
    // Déclaration des variables
    // Compteur
    int int_i;

    // Verifier que le tableau n'est pas vide
    if (taille == 0)
    {
        fprintf(stderr,"Le tableau est vide !\n");
        exit(ERREUR);
    }

    // Initialisation du min et du max avec la première valeur du tableau
    *min = tab[0];
    *max = tab[0];


    // Parcours du tableau et mise à jour du min et du max
    for (int_i = 1 ; int_i <= taille - 1 ; int_i++)
    {
        if (*min > tab[int_i])
        {
            *min = tab[int_i];
        }
        if (*max < tab[int_i])
        {
            *max = tab[int_i];
        }
    }
}