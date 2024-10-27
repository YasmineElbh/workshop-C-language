#include<stdio.h>

int main(){
    int base, exposant, res;
    printf("entrer un nomre de base: ");
    scanf("%d",&base);
    printf("entrer exposant: ");
    scanf("%d",&exposant);
    
    res = 1;
    for (int i = 0; i < exposant; i++)
    {
        
        res *= base;
        
    }
    
    printf("la resultat de %d^%d=%d",base,exposant,res);
}