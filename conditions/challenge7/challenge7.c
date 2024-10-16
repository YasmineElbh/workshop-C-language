#include <stdio.h>

int main()
{
    char a;
    printf("entrer un caractere: ");
    scanf("%c",&a);

    if(a >= 65 && a <= 90)
        printf("maj");
    else
        printf("not a maj");
}
