#include<stdio.h>

int main(){
    int a,b,res1,res2,res3,res4;
    printf("entrer le premier nombre: ");
    scanf("%d",&a);
    printf("entrer le deuxieme nombre: ");
    scanf("%d",&b);

    res1 = a+b;
    res2=a-b;
    res3=a*b;
    res4=a/b;

    printf("addition: %d\n",res1);
    printf("sustraction: %d\n",res2);
    printf("multiplicaion: %d\n",res3);
    printf("division: %d",res4);
}