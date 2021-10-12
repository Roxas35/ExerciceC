//On ajoute la bibliothèque pour ce programme

#include <stdio.h>

//On créé des variables pour notre programme
int nombre1;
int nombre2;
int nombre3;


int main(void)
{

//On affiche la phrase si dessous
//Le scanf sert à extraire le nombre

    printf("Veuillez saisir le premier nombre : ");
    scanf("%i", &nombre1);

    printf("Veuillez saisir le deuxieme nombre : ");
    scanf("%i", &nombre2);

    printf("Veuillez saisir le troisieme nombre : ");
    scanf("%i", &nombre3);


//On crée un condition if pour comparer les trois valeurs saisis
    if (nombre1 > nombre2 && nombre1 > nombre3)
    {
        printf("le plus grand nombre est : %i ", nombre1);
    }
    else if (nombre2 > nombre3)
    {
        printf("le plus grand nombre est : %i\n", nombre2);
    }
    else
    {
        printf("le plus grand nombre est : %i\n", nombre3);
    }
    return 0; //Le programme principal se stop
}