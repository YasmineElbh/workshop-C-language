#include<stdio.h>

int main(){
    float m,km;
    printf("entrer la vitesse en kilomètres: ");
    scanf("%f",&km);

    m = km * 0.27778;
    printf("entrer la vitesse en mètres par seconde: %f(m/s)",m);
}
