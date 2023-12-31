/*!
\file triDen.c
\author Charrier Simon
\version 1
\date 17 novembre 2023
\brief Fonctions servant à trier par dénombrement
*/

// Inclusions
#include <stdio.h>
#include <stdlib.h>

#include "triDen.h"
#include "utiles.h"

// Définitions
#define ERREUR -1

// Trouver le min et le max d'un tableau
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

// Produire un tableau contenant les occurence de chaque entier dans un tableau
void histogramme (int* tab, int taille, int* histo, int tailleH, int min)
{
    // Définition des variables
    // Compteur de boucle
    int int_i;
    // Numéro d'index du tableau histo
    int int_index;

    // On initialise histo à 0 en parcourant toutes ses cases
    for (int_i = 0 ; int_i < tailleH ; int_i++)
    {
        histo[int_i] = 0;
    }


    for (int_i = 0 ; int_i < taille ; int_i++)
    {
        // Pour chaque élément de tab, on calcul un index dans le tableau histo en soustrayant min
        // Cela permet de faire commencer les valeurs d'histo à l'indice 0
        int_index = tab[int_i] - min;

        // On vérifie si l'index calculer est valide, cad si il appartient au tableau
        if (int_index >= 0 && int_index < tailleH)
        {
            // Si c'est le cas, on incrémente la valeurs de 1 à cette index du tableau
            histo[int_index]++;
        }
    }
}

// Tri par dénombrement d'un tableau d'entiers
void triDenombrement(int* tab, int taille)
{
    // Déclaration des variables
    // Min et Max du tableau
    int int_min;
    int int_max;
    // histogramme et sa taille
    int* pint_histo;
    int int_tailleH;
    // Index de l'histogramme
    int int_index;
    // Compteur de boucle
    int int_i;

    // On recherche les valeurs min et max
    minMaxTableau(tab, taille, &int_min, &int_max);

    // L'algorithme ne fonctionne que si tous les nombres sont des entiers > 0
    if (int_min < 0)
    {
        fprintf(stderr, "Le tableau contien des nombres négatifs !\n");
        exit(ERREUR);
    }

    // On créer historigramme de la bonne taille (max-min+1)
    int_tailleH = int_max - int_min + 1;
    pint_histo = (int*) malloc(int_tailleH * sizeof(int));
    if (pint_histo == NULL)
    {
        fprintf(stderr, "Erreur d'allocation\n");
        exit(ERREUR);
    }

    // On appel la fonction histogramme qui initialisera le tableau et remplira ce dernier
    histogramme(tab, taille, pint_histo, int_tailleH, int_min);

    // à l'aide du tableau histogramme, on reconstruit dans l'ordre le tableau initial
    // On initialise index à 0
    int_index = 0;
    // On parcours tous les éléments de l'histogramme (i est la valeur actuelle dans l'histogramme)
    for(int_i = 0 ; int_i < int_tailleH ; int_i++)
    {
        // On continue tant que la fréquence d'apparition de "i+min" > 0
        while (pint_histo[int_i] > 0)
        {
            // On assigne la valeurs i+min à la position de l'index dans la tableau initial
            tab[int_index] = int_i+int_min;

            // On incrémente index pour se déplacer vers la position suivante
            int_index++;

            // On décrémente la fréquence d'apparition de la valeurs i+min de l'histogramme, car nous avons placer cette occurence dans le tableau.
            pint_histo[int_i]--;
        }
    }

    // On libère l'adresse du tableau histo
    free(pint_histo);

    // On affiche le résultat
    afftab(tab, taille);
}
