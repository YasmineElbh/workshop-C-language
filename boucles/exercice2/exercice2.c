#include<stdio.h>

int main(){
    int n;
    int f;
    printf("entrer le nomrbre: ");
    scanf("%d",&n);

    if(n < 0)
        printf("didn\'t exist");
    else if(n == 0){
        printf("factoriel is 0");
    }
    else{
        f = 1;
        for(int i = 1; i <= n; i++)
            f = f * i;
        printf("factoriel of %d is: %d",n,f);
    }
}