#include<stdio.h>

int main(){
    int m, n;
    printf("entrer le nombre: ");
    scanf("%d",&m);
    for(int i = 10;i >= 1;i--){
        printf("%d * %d = %d\n",m,i,m*i);
    }
}