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
    int swap = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            tmp = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = tmp;
            swap = 1;
        }
        
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d ",tab[j]);
    }

}