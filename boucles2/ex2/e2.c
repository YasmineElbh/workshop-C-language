#include<stdio.h>

int main(){
    int n;
    printf("saisir le nombre des lignes: ");
    scanf("%d",&n);

    for(int i = 1;i <= n; i++){
        for (int j = 0; j < (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}