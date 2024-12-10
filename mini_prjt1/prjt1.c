#include<stdio.h>
#include<string.h>

char titre[100];
char auteur[30];
float prix;
int quantite;

void ajouter_livre(){
    int n;
    printf("entrer le nombre des valeurs de tableau: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
    printf("entrer le Titre du livre: ");
    scanf("%s",&titre[i]);
    printf("entrer le Auteur du livre: ");
    scanf("%s",&auteur[i]);
    printf("entrer le Prix du livre: ");
    scanf("%d",&prix);
    printf("entrer la Quantite en stock: ");
    scanf("%d",&quantite);
    
    }
    printf("-------------------------------\n");
}
int main(){
    int n, choix;
    for (int i = 0; i <= n; i++)
    {
    printf("veuillez entrer votre choix: \n");
    printf("1.Ajouter un livre au stock.\n");
    printf("2.Afficher tous les livres disponibles.\n");
    printf("3.Rechercher un livre par son titre.\n");
    printf("4.Mettre a jour la quantite d'un livre.\n");
    printf("5.Supprimer un livre du stock.\n");
    printf("6.Afficher le nombre total de livres en stock.\n");
    printf("7.Quitter.\n");
    
    printf("entrer votre choix: ");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
            ajouter_livre();
            break;
        
        default:
            break;
        }
    }
    
}