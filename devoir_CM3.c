#include <stdio.h>

#include <stdlib.h>

#define MAX 10

typedef float Tableau_NOTES[MAX];

typedef int Tableau_COEFF[MAX];

int minimum_maximum(Tableau_NOTES tableaunotes)
{
    int i;
    float min = tableaunotes[0];
    float max = tableaunotes[0];
    for (i = 0;i < MAX; i++)
    {
        if (min > tableaunotes[i])
            min = tableaunotes[i];
        if (max < tableaunotes[i])
            max = tableaunotes[i];
    }
    printf("\nLa note maximale est : %f", max);
    printf("\nLa note minimale est : %f", min);
}


int afficher_les_notes(Tableau_NOTES tableaunotes, Tableau_COEFF tableaucoefficient)
{
    int i;
    printf ("\nVoici le tableau des notes : ");
    for (i = 0;i < MAX; i++)
        printf ("\n%f | %d", tableaunotes[i], tableaucoefficient[i]);
}

int saisie_notes(Tableau_NOTES tableaunotes, Tableau_COEFF tableaucoefficient)
{
    int i;
    float moyenne_notes = 0;
    int total_coeff = 0;
    for (i = 0 ; i < MAX ; i++)
    {
        printf("\nSaisissez la note n°%d : ",(i+1));
        scanf("%f",&tableaunotes[i]);
        printf("\nSaisissez le coefficient n°%d : ", (i+1));
        scanf("%d",&tableaucoefficient[i]);
        moyenne_notes = moyenne_notes + (tableaunotes[i]*tableaucoefficient[i]);
        total_coeff = total_coeff + tableaucoefficient[i];

    }
    moyenne_notes = moyenne_notes / total_coeff ;
    printf("La moyenne des notes est : %f", moyenne_notes) ;
}


int modifier_une_note(Tableau_NOTES tableaunotes)
{
    int modification;
    printf("\nSaisissez le numero de la note que vous voulez modifier : ");
    scanf("%d",&modification);
    printf("\nSaisissez la nouvelle note: ");
    scanf("%f", &tableaunotes[modification-1]);
}

int ajouter_un_point(Tableau_NOTES tableaunotes)
{
    int i;
    for (i = 0;i < MAX; i++)
        tableaunotes[i] = tableaunotes[i] + 1;
}


int main()
{
    Tableau_NOTES tableaunotes[10];
    Tableau_COEFF tableaucoefficient[10];
    saisie_notes(tableaunotes, tableaucoefficient);
    afficher_les_notes(tableaunotes, tableaucoefficient);
    minimum_maximum(tableaunotes);
    ajouter_un_point(tableaunotes);
    afficher_les_notes(tableaunotes,tableaucoefficient);
    modifier_une_note(tableaunotes);
    afficher_les_notes(tableaunotes,tableaucoefficient);
}

/* question de réflexion: on peut créer une structure dans laquel ajouter une boucle */
