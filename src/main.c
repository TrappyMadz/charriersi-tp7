/*!
\file main.c
\author Charrier Simon
\version 1
\date 14 novembre 2023
\brief Menu de séléction
*/

// Importations
#include <stdlib.h>

#include "utiles.h"
#include "triInsert.h"
#include "triFus.h"

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

    pint_tab=eTab(4);
	afftab(pint_tab, 4);
    pint_tab2=copierSousTableau(pint_tab,1,2);
    afftab(pint_tab2,2);
    free(pint_tab);
    free(pint_tab2);
	return (0);
}
