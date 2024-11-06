#include<stdio.h>

int main(){
    int n, tab[50];
    int tmp;

    printf("entrer le nombre de tableau: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("entrer element %d: ", +i);
        scanf("%d",&tab[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            tab[i] = tab[j];
            tab[j] = tab[i+1];
            tab[i+1] = tab[j+1];
        }
        
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d",tab[j]);
    }

}