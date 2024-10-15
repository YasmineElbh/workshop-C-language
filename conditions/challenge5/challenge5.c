#include <stdio.h>

int main()
{
    int annee;
    int choix;

    printf("entrer annee que vous voulez convertir: ");
    scanf("%d\n", &annee);

    switch (choix)
    {
        printf("entrer votre choix: \n");
        printf("1.convertir  to mois: \n");
        printf("2.convertir to jours: \n");
        printf("3.convertir to heures: \n");
        printf("4.convertir  to minutes: \n");
        printf("5.convertir to secondes: \n");
        printf("6.Quitter: \n");
        scanf("%d", &choix);
    case 1:
        annee = annee * 12;
        printf("annee pour mois est:", annee);
        break;
    case 2:
        annee = annee * 365;
        printf("annee pour jours est:", annee);
        break;
    case 3:
        annee = annee * 365 * 24;
        printf("annee pour heures est:", annee);
        break;
    case 4:
        annee = annee * 365 * 24 * 60;
        printf("annee pour minutes est:", annee);
        break;
    case 5:
        annee = annee * 365 * 24 * 60 * 60;
        printf("annee pour heures est:", annee);
        break;
    case 6:
        printf("byeeeee");
        break;
    default:
        printf("choi invalide");
        break;
    }
}