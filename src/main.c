/*!
\file main.c
\author Charrier Simon
\version 1
\date 14 novembre 2023
\brief Menu de séléction
*/

// Importations
#include <stdlib.h>
#include <stdio.h>

#include "utiles.h"
#include "triInsert.h"
#include "triFus.h"

// Définitions
#define ERREUR -1

/*!
\fn int main (int argc, char** argv)
\author Charrier Simon
\version 1
\date 14 novembre 2023
\brief Affichage du menu
\param argc nombre d'arguments en entrée
\param argv valeur des arguments en entrée
\return 0 si tout c'est bien passé
*/
int main(int argc, char ** argv) 
{
	int* pint_tab;
    int* pint_tab2;
    int* tabRes;

    printf("Premier tableau :\n");
    pint_tab=eTab(4);
    printf("Second tableau : \n");
    pint_tab2=eTab(4);
    printf("Affichage du premier tableau :\n");
	afftab(pint_tab, 4);
    printf("Affichage du second tableau :\n");
    afftab(pint_tab2,4);

    tabRes = malloc(8 * sizeof(int));
    if (tabRes == NULL)
    {
        fprintf(stderr,"Erreur d'allocation\n");
        exit(ERREUR);
    }
    
    printf("Fusion...\n");
    fusion(pint_tab, 4, pint_tab2, 4, tabRes);

    printf("Affichage du tableau fusionner :\n");
    afftab(tabRes,8);

    

    free(pint_tab);
    free(pint_tab2);
    free(tabRes);
	return (0);
}
