#include <stdio.h>
#include <string.h>

int main(void)
{


    //ouvrir le fichier
    FILE *file = fopen("Plaque.csv", "a");

    if (!file)
    {

        return 1;
    }

    //obtenir les noms et les numéros
    char *modele = ("Modèle de la voiture : Subaru\n");
    char *number = ("Plaque d'immatriculation : RE-589-EZ ");

    //imprimer dans le fichier
    fprintf(file, "%s, %s", modele, number);

    //fermer le fichier

    fclose(file);


}