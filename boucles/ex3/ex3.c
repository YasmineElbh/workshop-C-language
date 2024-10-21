#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("entrer un nombre: ");
    scanf("%d",&n);

    for(int i = 0; i <= n;i++){
       /// sum = 0;
        sum += i;
    }
    printf("le resultat de %d est %d",n,sum);
}