/*!
\file triDen.h
\author Charrier Simon
\version 1
\date 17 novembre 2023
\brief Fichier .h associé aux fonctions triDen
*/

#ifndef __TRIDEN_H_
#define __TRIDEN_H_

/*!
\fn void minMaxTableau(int* tab, int taille, int* min, int* max)
\author Charrier Simon
\version 1
\date 17 novembre 2023
\brief Stockage dans des variables fournies du min et du max d'un tableau
\param tab tableau d'entier
\param taille taille du tableau
\param min Minimum (à fournir mais sera modifiée par la procédure)
\param max Maximum (à fournir mais sera modifiée par la procédure)
*/
void minMaxTableau(int* tab, int taille, int* min, int* max);

/*!
\fn void histogramme (int* tab, int taille, int* histo, int tailleH, int min)
\author Charrier Simon
\version 1
\date 17 novembre 2023
\brief Stockage du nombre d'occurence de chaque chiffre entre min et la tailleH
\param tab tableau d'entiers positifs
\param taille taille du tableau
\param histo histogramme qui va contenir les occurences de chaque chiffres (à fournir, mais il sera initialisé dans la fonction)
\param tailleH taille de l'histogramme
\param min minimum du tableau tab
*/
void histogramme (int* tab, int taille, int* histo, int tailleH, int min);

/*!
\fn void triDenombrement(int* tab, int taille)
\author Charrier Simon
\version 1
\date 17 novembre 2023
\brief Tri d'un tableau d'entier par dénombrement
\param tab tableau à trier
\param taille taille du tableau
*/
void triDenombrement(int* tab, int taille);
#endif