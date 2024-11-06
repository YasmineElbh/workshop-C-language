#include<stdio.h>

int main(){
    int n, tab[50], tmp;

    printf("entrer le nombre de tableau: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("entrer element %d: ", +i);
        scanf("%d",&tab[i]);
    }
    //tmp = 1;
    for(int i = 0; i < n - 1; i++){
        tmp = tab[i];
        tab[i] = tab[i + 1];
        tab[i + 1] = tmp;
    }
    for(int i = 0; i < n; i++){
        printf("%d ",tab[i]);
    }
}