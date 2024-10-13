#include<stdio.h>

int main(){
    int c;
    printf("entrer la temperature en celsius: ");
    scanf("%d",&c);
    if(c < 0)
        printf("solide");
    if(c < 100 || c >= 0)
        printf("liquide");
    if(c >= 100)
        printf("Gaz");

}