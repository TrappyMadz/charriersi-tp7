/*!
\file utiles.c
\author Charrier Simon
\version 1
\date november 14 2023
\brief Some functions useful for all tps
*/

// Importations
#include <stdlib.h>
#include <stdio.h>

#include "utiles.h"

// Définitions
#define ERREUR -1

// Displaying a table
void afftab(int *tint_tab,int int_taille)
{
	// Variables declaration
    // Loop counter
	int int_i;

	// Displaying
	printf("|");
	for (int_i = 0 ; int_i < int_taille; int_i++)
	{
		printf("%d|",tint_tab[int_i]);
	}
    printf("\n");
}

// Requesting an integer array from user
int* eTab(int int_taille)
{
    // Variables statement
    // Verification
    int int_verif;
    // Compteur de boucle
    int int_i;
    // Tableau
    int* pint_tab;

    // Allocation du tableau
    pint_tab = malloc(int_taille * sizeof(int));

    // Boucle pour permettant de demander chaque entier dans le tableau
    for (int_i = 0 ; int_i <= int_taille-1 ; int_i++)
    {
        // Vérification et demande
        int_verif = 0;
        while (int_verif != 1)
        {
            printf("Entrez le contenu de la case %d :\n",int_i+1);
            int_verif = scanf("%d",&pint_tab[int_i]);
        }
    }

    return pint_tab;
}
