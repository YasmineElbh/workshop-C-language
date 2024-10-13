#include<stdio.h>
#include<math.h>

int main(){
    int x1,x2,y1,y2,z1,z2;

    printf("entrer la valeur de x1: ");
    scanf("%d",&x1);
    printf("entrer la valeur de x2: ");
    scanf("%d",&x2);
    printf("entrer la valeur de y1: ");
    scanf("%d",&y1);
    printf("entrer la valeur de y2: ");
    scanf("%d",&y2);
    printf("entrer la valeur de z1: ");
    scanf("%d",&z1);
    printf("entrer la valeur de z2: ");
    scanf("%d",&z2);

    int distance = sqrt(pow((x2 - x1),2) + pow((y2 - 1),2) + pow((z2 - z1),2));
    printf("la distance es: %d", distance);
}