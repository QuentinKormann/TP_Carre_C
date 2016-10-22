#include <stdio.h>
#include <stdlib.h>


/*Algorithme
    Afficher "Nombre de colonne?:"
    Entrer de l'entier repr�sentant le nombre de colonne

    Afficher "Nombre de ligne?:"
    Entrer de l'entier repr�sentant le nombre de ligne

    Pour i de 0 a nombre de ligne
        Pour j de 0 a nombre de colonne
            Si i est �gal a 0 ou i est �gal a nombre de ligne -1 ou j �gal a 0 ou j �gal a nombre de colonne -1
                Afficher "*"
            Fin Si
            Sinon
                Afficher "O"
            Fin Sinon
        Fin Pour
    Allez a la ligne
    Fin Pour
    Fin
*/

int main()
{
    //D�claration des entier
    int nColonne=0;
    int nLigne=0;
    int i=0;
    int j=0;

    //Demande du nombre de colonne avec entre de l'utilisateur
    printf("Nombre de colonne?: ");
    scanf("%i",&nColonne);

    //Demande du nombre de ligne avec entre de l'utilisateur
    printf("Nombre de ligne?: ");
    scanf("%i",&nLigne);

    //S�paration ligne par ligne
    for(i=0;i<nLigne;i++)
    {
        //S�paration colonne par colonne
        for(j=0;j<nColonne;j++)
        {
            //Si la colonne ou la ligne est en extremiter affichage dune "*"
            if(i==0 || i==nLigne-1 || j==0 || j==nColonne-1)
            {
                printf("*");
            }

            //Sinon afficher "O"
            else
            {
                printf("O");
            }
        }
        //Retour a la ligne
        printf("\n");
    }
    return 0;
}
