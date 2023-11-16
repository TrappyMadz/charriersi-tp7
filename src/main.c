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

    printf("Premier tableau :\n");
    pint_tab=eTab(4);
    printf("Affichage du premier tableau :\n");
	afftab(pint_tab, 4);

    triFusion(pint_tab,4);
    afftab(pint_tab,4);
    
    free(pint_tab);
	return (0);
}
