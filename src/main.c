/*!
\file main.c
\author Charrier Simon
\version 1
\date 17 novembre 2023
\brief Menu de séléction
*/

// Importations
#include <stdlib.h>
#include <stdio.h>

#include "utiles.h"
#include "triInsert.h"
#include "triFus.h"
#include "triDen.h"

// Définitions
#define ERREUR -1
#define SORTIE 0

/*!
\fn int main (int argc, char** argv)
\author Charrier Simon
\version 1
\date 17 novembre 2023
\brief Affichage du menu
\param argc nombre d'arguments en entrée
\param argv valeur des arguments en entrée
\return 0 si tout c'est bien passé
*/
int main(int argc, char ** argv) 
{
    // Déclaration des variables
    // Choix du menu
    int int_choix;
    // Vérification
    int int_verif;
    // Taille du tableau et Tableau
    int int_taille;
    int* pint_tab;

    printf("----------------------------------\n");
	printf("---------------Menu---------------\n");
	printf("----------------------------------\n");
	printf("----Quelle fonction utiliser ?----\n");
	printf("----------------------------------\n");
	printf("- 1. Tri par insertion           -\n");
	printf("- 2. Tri fusion                  -\n");
	printf("- 3. Tri par dénombrement        -\n");
	printf("- 4. Retour                      -\n");
	printf("----------------------------------\n");
	printf("----------------------------------\n");

	int_verif = scanf("%d",&int_choix);

	while (int_verif!=1)
	{
		printf("Veuillez entrer une option valide.\n");
		int_verif = scanf("%d",&int_choix);
	}

    switch (int_choix)
    {
    case 1 :

        // Demande de la taille du tableau à l'utilisateur
        printf("Quelle taille fait votre tableau ?\n");
        int_verif = scanf("%d", &int_taille);
        while (int_verif != 1)
        {
            printf("Veuillez entrer une valeurs correcte.\n");
            int_verif = scanf("%d", &int_taille);
        }

        // On initialise le tableau
        pint_tab = eTab(int_taille);

        // On le tri
        triInsert(pint_tab, int_taille);

        // On l'affiche
        afftab(pint_tab, int_taille);

        // On libère la mémoire
        free (pint_tab);

        break;
        
    case 2 :

        // Demande de la taille du tableau à l'utilisateur
        printf("Quelle taille fait votre tableau ?\n");
        int_verif = scanf("%d", &int_taille);
        while (int_verif != 1)
        {
            printf("Veuillez entrer une valeurs correcte.\n");
            int_verif = scanf("%d", &int_taille);
        }

        // On initialise le tableau
        pint_tab = eTab(int_taille);

        // On le tri
        triFusion(pint_tab, int_taille);

        // On l'affiche
        afftab(pint_tab, int_taille);

        // On libère la mémoire
        free (pint_tab);

        break;

    case 3 :

        // Demande de la taille du tableau à l'utilisateur
        printf("Quelle taille fait votre tableau ?\n");
        int_verif = scanf("%d", &int_taille);
        while (int_verif != 1)
        {
            printf("Veuillez entrer une valeurs correcte.\n");
            int_verif = scanf("%d", &int_taille);
        }

        // On initialise le tableau
        pint_tab = eTab(int_taille);

        // On le tri
        triDenombrement(pint_tab, int_taille);

        // On l'affiche
        afftab(pint_tab, int_taille);

        // On libère la mémoire
        free (pint_tab);

        break;

    case 4 :
        printf("Sortie du programme\n");
        exit(SORTIE);
        break;
                
    default:
        printf("Sortie du programme\n");
        exit(SORTIE);
        break;
    }
    return 0;
}
