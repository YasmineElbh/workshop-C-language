#include <stdio.h>

void min(int a, int b){
    if(a < b)
        printf("%d EST Le minimum", a);
    else
        printf("%d EST Le minimum", b);
}

int main(){
    int a,b;
    printf("entrer le prmier nombre: ");
    scanf("%d",&a);
    printf("entrer le deuxieme nombre: ");
    scanf("%d",&b);
    min(a,b);
}