#include<stdio.h>

int main(){
    int n, tab[50];
    int somme;

    printf("entrer le nombre de tableau:");
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        printf("entrer element nr %d: ", +i);
        scanf("%d",&tab[i]);
    }
    for(int i = 0;i < n;i++){
        // printf("%d",tab[i]);
        somme+= tab[i];
        
    }
    printf("la somme est: %d",somme);
    
}