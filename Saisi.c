//Exercice 1

#include <stdio.h> //On ajoute la bibliothèque pour ce programme

//On écrit la fonction principale
int main(void)
{

//On créé des variables pour notre programme
    int a;
    int b;
    int resultat;

//On affiche le message dessous
//Le scanf va nous permettre extraire la valeur.
    printf(" Entre le premier nombre :\n");
    scanf("%i", &a);

    printf(" Entre le deuxieme nombre :\n");
    scanf("%i", &b);

// On fait le calcul :
    resultat = a * b;

    printf("%i * %i = %i\n", a, b, resultat);

//On met fin au programme princiapl.
    return 0;
}