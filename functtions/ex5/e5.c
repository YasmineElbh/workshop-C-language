#include <stdio.h>

void factoriel(int a){
    int fact = 1;
    if(a == 0){
        a = 1;
    }
    else{
        for (int i = 1; i <= a; i++)
        {
            fact = fact * i;
        }
        printf("le factoriel de %d est %d",a,fact);
    }
}

int main(){
    int a;
    printf("entrer le prmier nombre: ");
    scanf("%d",&a);
    factoriel(a);
}