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
    
    // On renvoie le tableau dest
    return dest;
}