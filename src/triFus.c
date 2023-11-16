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
        fprintf(stderr, "La valeurs de départ doit être inférieure à la valeurs de fin !\n");
        exit(ERREUR);
    }

    // On initialise la taille
    int_taille = fin - debut +1;

    // On alloue la mémoire necéssaire et on verifie si l'allocation s'est bien passée
    dest = malloc(int_taille * sizeof(int));
    if (dest == NULL)
    {
        fprintf(stderr, "Erreur d'allocation\n");
        exit(ERREUR);
    }

    // Pour i allant du début à la fin, on associe l'élément i de src à l'élement suivant de dest
    for (int_i = 0 ; int_i <= int_taille ; int_i++)
    {
        dest[int_i] = src[int_i+debut];
    }
    
    // On renvoie le tableau dest
    return dest;
}

void fusion (int* tab1, int taille1, int* tab2, int taille2, int* tabRes)
{
    // Déclaration des variables
    // Compteurs de boucle
    int int_i=0, int_j=0, int_k=0;

    // On compare les éléments des 2 tableaux et les fusionner dans tabRes
    while (int_i < taille1 && int_j < taille2)
    {
        if (tab1[int_i] <= tab2[int_j])
        {
            tabRes[int_k] = tab1[int_i];
            int_i++;
        }
        else
        {
            tabRes[int_k] = tab2[int_j];
            int_j++;
        }
        int_k++;
    }

    // On copie les élément restants de tab1 si il y en a
    while (int_i < taille1)
    {
        tabRes[int_k] = tab1[int_i];
        int_i++;
        int_k++;
    }
    
    // On copie ceux de tab2
    while (int_j < taille2)
    {
        tabRes[int_k] = tab2[int_j];
        int_j++;
        int_k++;
    }
}

void triFusion(int* tab, int taille)
{
    // On verifie que le tableau à plus d'un élément (sinon déjà trié)

        // On calcule l'indice du milieu du tableau pour le couper en 2

        // On alloue l'espace nécessaire au 2 tableaux
        // Le sous tableau 1 sera composé des éléments de 0 à milieu
        // Le sous tableau 2 aura le reste des éléments

        // On utilise la fonction copierSousTableau pour couper le tableau en 2

        // On appel enfin triFusion récursivement avec les 2 sous tableaux.

        // Une fois le tri fait, on fusionne les sous tableaux

        // On libère la mémoire prise par les sous tableaux
}

