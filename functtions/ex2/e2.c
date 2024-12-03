#include <stdio.h>

void multiple(int a, int b){
    int mult = a * b;
    printf("somme est: %d", mult);
}

int main(){
    int a,b;
    printf("entrer le prmier nombre: ");
    scanf("%d",&a);
    printf("entrer le deuxieme nombre: ");
    scanf("%d",&b);
    multiple(a,b);
}