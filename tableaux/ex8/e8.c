#include<stdio.h>

int main(){
    int n, tab[50];
    int tmp;

    printf("entrer le nombre de tableau: ");
    scanf("%d",&n);
    int tab2[n];


    for(int i = 0; i < n; i++){
        printf("entrer element %d: ", +i);
        scanf("%d",&tab[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        tab2[i] = tab[i];
        // for (int j = 0; j < n - i - 1; j++)
        // {
        //     tmp = tab[i];
        //     tmp = tab[j];
        //     tab[j] = tab[j+1];
        //     tab[j+1] = tmp;
            
        // }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",tab2[i]);
    }

}