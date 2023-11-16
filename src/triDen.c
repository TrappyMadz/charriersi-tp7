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

void histogramme (int* tab, int taille, int* histo, int tailleH, int min)
{
    // On initialise histo à 0 en parcourant toutes ses cases

    // Pour chaque élément de tab, on calcul un index dans le tableau histo en soustrayant min
        // Cela permet de faire commencer les valeurs d'histo à l'indice 0

        // On vérifie si l'index calculer est valide, cad si il appartient au tableau
            // Si c'est le cas, on incrémente la valeurs de 1 à cette index du tableau
}