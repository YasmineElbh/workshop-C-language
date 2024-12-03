#include <stdio.h>

void max(int a, int b){
    if(a > b)
        printf("%d EST Le MAXIMUM", a);
    else
        printf("%d EST Le MAXIMUM", b);
}

int main(){
    int a,b;
    printf("entrer le prmier nombre: ");
    scanf("%d",&a);
    printf("entrer le deuxieme nombre: ");
    scanf("%d",&b);
    max(a,b);
}