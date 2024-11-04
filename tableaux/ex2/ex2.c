#include<stdio.h>

int main(){
    int n;
    int tab[50];
    printf("entrer le nombre de tableau:");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("entrer element nr %d: ", +i);
        scanf("%d",&tab[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ",tab[i]);
    }
}