#include<stdio.h>

int main(){
    int n;
    int count = 0;
    printf("entrer un les nombres: ");
    scanf("%d",&n);

    if(n == 0)
        n  = 1;
    else{
        while(n != 0){ 
            n = n / 10;
            //n = n % 10;
            count++;
    }
}
    printf("le nombre de chiffre est %d", count);
}