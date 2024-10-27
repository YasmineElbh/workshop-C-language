#include<stdio.h>

int main(){
    int n, z;
    printf("entrer un les nombres: ");
    scanf("%d",&n);

    // for(int i = 0; i < n;i++){
    //     z = n % 10;
    //     printf("%d",z);
    //     n = n / 10; //suppression te last numer
    // }
    while(n > 0){
        z = n % 10;
        printf("%d",z);
        n = n / 10; //suppression te last numer
    }
}