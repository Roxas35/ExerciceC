//Exercice 2

//On inclu la bibliothèque qu'on va utilisé
#include <stdio.h>

//On crée les variables utilent au programme
int a;
int b;
int tmp;

//On crée la fonction principal
int main()
{

//On affiche la phrase si dessous
//Le scanf sert à extraire le nombre
    printf("Entrez un nombre\n");
    scanf("%i", &a);

    printf("Entrez un nombre\n");
    scanf("%i", &b);


//On crée les différents swap des entiers
    tmp = a;
    a = b;
    b = tmp;

//On affiche la phrase si dessous en prenant en compte les nombres précédenments entrées dans le terminal.
    printf("Changement !\nA = %i\nB = %i\n", a, b);

//On met fin au programme principal.
    return 0;
}