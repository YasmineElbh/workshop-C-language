#include<stdio.h>

int main(){
    int tab[50], n;

    printf("entrer le nombre de tab: ",n);
    for (int i = 0; i < n; i++)
    {
        printf("saisir les elements: ");
        scanf("%d",&tab[i]);
    }
    printf("les elements u tableaux:");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d",tab[i]);
    }
    
}