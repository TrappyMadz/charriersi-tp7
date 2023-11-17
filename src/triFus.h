/*!
\file triFus.h
\author Charrier Simon
\version 1
\date 17 novembre 2023
\brief Fichier .h associé aux fonctions triFus
*/

#ifndef __TRIFUS_H_
#define __TRIFUS_H_

/*!
\fn int* copierSousTableau(int* src, int debut, int fin)
\author Charrier Simon
\version 1
\date 17 novembre 2023
\brief Fonction permettant de dupliquer un morceau de tableau source vers un tableau destination
\param src le tableau source
\param debut première case à copier
\param fin dernière case à copier
\return le tableau déstination
*/
int* copierSousTableau(int* src, int debut, int fin);

/*!
\fn void fusion (int* tab1, int taille1, int* tab2, int taille2, int* tabRes)
\author Charrier Simon
\version 1
\date 17 novembre 2023
\brief Fusion par ordre croissant de 2 tableaux
\param tab1 tableau 1
\param taille1 taille du tableau 1
\param tab2 tableau 2
\param taille2 taille du tableau 2
\param tabRes tableau dans lequel stocker le tableau résultant
*/
void fusion (int* tab1, int taille1, int* tab2, int taille2, int* tabRes);

/*!
\fn void triFusion (int* tab, int taille)
\author Charrier Simon
\version 1
\date 17 novembre 2023
\brief tri d'un tableau par fusion
\param tab tableau à trié
\param taille taille du tableau
*/
void triFusion (int* tab, int taille);

#endif