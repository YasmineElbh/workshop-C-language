#include<stdio.h>

int main(){
    int n, tab[50];
    int tabs[50];//tableau de sortie

    printf("entrer la taille de taleau: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("entrer element %d: ", +i);
        scanf("%d",&tab[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        tabs[n - i - 1] = tab[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",tabs[i]);
    }
}