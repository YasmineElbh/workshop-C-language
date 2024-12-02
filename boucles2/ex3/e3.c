#include <stdio.h>

int main()
{
    int n;
    printf("entrer un nombre premier: ");
    scanf("%d", &n);

    int premir = 0;
    if (n <= 1)
        premir = 0;
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i != 0)
            {
                premir = 1;
            }
        }
    }
    if (premir)
    {
        printf("%d est premier", n);
    }
    else
    {
        printf("%d est pas premier", n);
        ;
    }
}