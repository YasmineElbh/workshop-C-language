#include<stdio.h>

int main(){
    int n;
    printf("entrer un nombre: ");
    scanf("%d",&n);

    for(int i = 1; i <= n;i++){
        if(n % 2 == 0){
            // i *= 2;
            printf("%d ", i * 2);
        }         
    }
    printf("\n");
}