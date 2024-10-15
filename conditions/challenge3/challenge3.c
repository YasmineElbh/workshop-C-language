#include<stdio.h>

int main(){
    int num1,num2;
    printf("entrer le premier nombre: ");
    scanf("%d",&num1);
    printf("entrer le deuxieme nombre: ");
    scanf("%d",&num2);

    int re = num1 + num2;
    if(num1 == num2)
        re *= 3;
    
    printf("%d\n",re);
}