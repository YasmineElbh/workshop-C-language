#include <stdio.h>

int main()
{
    int num;
    printf("entrer un nombree: ");
    scanf("%d",&num);

    if(num == 0)
        printf("NULL");
    else if(num > 0)
        printf("positif");
    else
        printf("negatif");
}