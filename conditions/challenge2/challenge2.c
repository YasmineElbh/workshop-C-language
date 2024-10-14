#include<stdio.h>

int main(){
    char alph;

    printf("entrer an alphabet: ");
    scanf("%c",&alph);

    switch (alph)
    {
    case 'a':
        printf("voyelle");
        break;
    case 'e':
        printf("voyelle");
        break;
    case 'i':
        printf("voyelle");
        break;
    case 'o':
        printf("voyelle");
        break;
    case 'u':
        printf("voyelle");
        break;
    case 'y':
        printf("voyelle");
        break;
    default:
        printf("non voyelle");
        break;
    }
    return 0;
}