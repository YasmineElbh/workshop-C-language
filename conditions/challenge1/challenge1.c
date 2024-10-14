#include<stdio.h>

int main(){
    int num;
    printf("entrer un nombre: ");
    scanf("%d",&num);

    if(num % 2 == 0)
        printf("pair");
    else
        printf("impair");
}