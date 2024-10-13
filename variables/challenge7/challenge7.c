#include<stdio.h>

int main(){
    int numb,a,b,c,d;
    printf("entrer le nombre que voulez vouz inverser: ");
    scanf("%d",&numb);

    a = (numb / 1000) % 10;
    b = (numb / 100) % 10;
    c = (numb / 10) % 10;
    d = numb % 10;

    printf("l inverse est: %d%d%d%d\n",d,c,b,a);
}