#include<stdio.h>

int main(){
    int n, tab[50], facteur;
    int mult;

    printf("entrer le nombre de tableau: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("entrer element %d: ", +i);
        scanf("%d",&tab[i]);
    }
    printf("entrer le facteur: ");
    scanf("%d",&facteur);

    for(int i = 0; i < n; i++){
        tab[i] *= facteur;
    }
    for(int i = 0; i < n; i++){
        printf("%d ",tab[i]);
    }
}