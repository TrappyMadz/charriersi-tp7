/*!
\file triInsert.c
\author Charrier Simon
\version 1
\date 17 novembre 2023
\brief Tri par insertion
*/

// Inclusions
#include "triInsert.h"

// Tri par insertion
void triInsert (int* pint_tab, int int_taille)
{
    // Déclaration des variables
    // Compteur de boucle
    int int_i;
    // Element en cours de tris
    int int_elemAct;
    // Element de comparaison lors du tri
    int int_j;

    // Boucle de la taille du tableau (on va parcourir tous les éléments)
    for (int_i = 0 ; int_i <= int_taille -1; int_i++)
    {
        // On prend l'élément i du tableau (T[i])
        int_elemAct = pint_tab[int_i];

        // On stock i dans une autre variable (j)   
        int_j = int_i;

        // On sort du while dès qu'on a parcourus tout le tableau ou qu'on trouve un élémént < T[i]
        while (int_j >= 0 && pint_tab[int_j-1] > int_elemAct)
        {
            // On remplace l'élément j du tableau par l'élément j-1 (on décale les éléments d'un cran)
            pint_tab[int_j] = pint_tab[int_j-1];

            // et on passe au j précédent
            int_j = int_j-1;
        }

        // Le décalage va laisser un trou. On place T[i] à cet endroit (donc à T[j])
        pint_tab[int_j] = int_elemAct;
    }
}
