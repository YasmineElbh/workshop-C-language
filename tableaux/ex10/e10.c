#include<stdio.h>

int main(){
    int n, tab[50];
    int r, i;
    printf("entrer le nombre de tableau: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("entrer element nr %d: ", i);
        scanf("%d",&tab[i]);
    }
    printf("entrer element que voulez vous rechercher dans le tableau: ");
    scanf("%d",&r);

    int found = 0;
    for(int i = 0; i < n; i++){
        
        if(tab[i] == r){
            // r = tab[i];
            printf("element que vous recherchez est present :%d",r,i);
            found = 1;
            }
        }
        if(!found)
            printf("%d element que vous recherchez not present", r, i);

    
}