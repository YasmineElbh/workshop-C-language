#include<stdio.h>

int main(){
    int i, tab[50], n;
    int r, replace;
    printf("entrer le nombre de tableaux: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("entrer element nr %d: ", i);
        scanf("%d",&tab[i]);
    }

    for(int i = 0; i < n; i++){
        if(tab[i] % 2 == 0){
            printf("le paire est: %d\n", tab[i]);
        }
    }
}