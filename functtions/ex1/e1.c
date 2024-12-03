#include <stdio.h>

void somme(int a, int b){
    int some = a + b;
    printf("somme est: %d", some);
}
int main(){
    int a,b;
    printf("entrer le prmier nombre: ");
    scanf("%d",&a);
    printf("entrer le deuxieme nombre: ");
    scanf("%d",&b);
    somme(a,b);
}