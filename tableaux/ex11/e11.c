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

    

    int found = 0;
    printf("entrer element que voulew vous remplace avec: ");
    scanf("%d",&replace);
    for(int i = 0; i < n; i++){
        
        if(tab[i] == r)
        {
            tab[i] = replace;
            printf("vous avez remplace %d avec %d",r,replace,i);
            found = 1;
            
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d",tab[i]);
    }
}