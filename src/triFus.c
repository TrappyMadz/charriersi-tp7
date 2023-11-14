// Inclusions
#include <stdio.h>
#include <stdlib.h>

#include "triFus.h"

// Définitions
#define ERREUR -1

// Copie d'un tableau dans un autre

int* copierSousTableau(int* src, int debut,int fin)
{
    // Définition des variables
    // Compteur de boucle
    int int_i;
    // Tableau copié
    int* dest;
    // Taille du nouveau tableau
    int int_taille;

    // On vérifie que l'entrée est correcte (si début < fin, tout va bien)
    if (debut > fin)
    {
        printf("La valeurs de départ doit être inférieure à la valeurs de fin !\n");
        exit(ERREUR);
    }

    // On initialise la taille
    int_taille = fin - debut +1;

    // On alloue la mémoire necéssaire
    dest = malloc(int_taille * sizeof(int));

    // Pour i allant du début à la fin, on associe l'élément i de src à l'élement suivant de dest
    for (int_i = 0 ; int_i <= int_taille ; int_i++)
    {
        dest[int_i] = src[int_i+debut];
    }
    
    // On renvoie le tableau dest
    return dest;
}