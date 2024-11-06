#include<stdio.h>

int main(){
    int n, tab[50];
    int max;
    printf("entrer la valeur de tableau: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("entrer les valeurs %d: ", +i);
        scanf("%d",&tab[i]);
    }
    max = tab[0];
    for (int i = 0; i < n; i++)
    {
        if(tab[i] > max){
            max = tab[i];
        }
    }
    printf("%d",max);
    printf("\n");
    
}