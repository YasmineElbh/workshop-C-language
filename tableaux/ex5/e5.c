#include<stdio.h>

int main(){
    int n, tab[50];

    int min;
    printf("entrer la valeur de tableau: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("entrer les valeurs %d: ", +i);
        scanf("%d",&tab[i]);
    }
    min = tab[0];
    for (int i = 0; i < n; i++)
    {
        if(tab[i] < min){
            min = tab[i];
        }
    }
    printf("%d",min);
    printf("\n");
}