#include<stdio.h>
#include<string.h>

char titre[100];
char auteur[30];
float prix;
int quantite;

ajouter_livre(){
    printf("entrer le nombre des valeurs de tableau: ");
    printf("entrer le Titre du livre");
    scanf("%s",&titre);
    printf("entrer le Auteur du livre");
    scanf("%s",&auteur);
    printf("entrer le Prix du livre");
    scanf("%d",&prix);
    printf("entrer la Quantite en stock");
    scanf("%d",&quantite);
}
int main(){
    int n, choix;
    printf("veuillez entrer votre choix: ");
    printf("1.Ajouter un livre au stock.");
    printf("2.Afficher tous les livres disponibles.");
    printf("3.Rechercher un livre par son titre.");
    printf("4.Mettre à jour la quantité d'un livre.");
    printf("5.Supprimer un livre du stock.");
    printf("6.Afficher le nombre total de livres en stock.");
    for (int i = 0; i < n; i++)
    {
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