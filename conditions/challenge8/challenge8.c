#include <stdio.h>

int main()
{
    char carac;
    printf("entrer un caractere: ");
    scanf("%c",&carac);

    if(carac >= 'A' && carac <= 'Z')
        printf("majiscule");
    else if(carac >= 'a' && carac <= 'z')
        printf("miniscule");
    else
        printf("NULL");
}