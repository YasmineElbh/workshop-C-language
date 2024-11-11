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
    printf("entrer element que voulez vous remplacer dans le tableau: ");
    scanf("%d",&r);

    printf("element le remplacement: ");
    scanf("%d",&replace);
    
    int found = 0;
    for(int i = 0; i < n; i++){
        if(tab[i] == r)
        {
            r = tab[i];
            
            found = 1;
        }
    }
    printf("%d",tab[i]);
}