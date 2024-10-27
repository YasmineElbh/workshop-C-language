#include<stdio.h>

int main(){
    int n, i;
    printf("entrer un nombre: ");
    scanf("%d",&n);

    for(int i = 1; i < n * 2; i+=2){
        if(n % 2 != 0){
            printf("%d ", i);
        }
    }
    printf("\n");
}