#include <stdio.h>
#include<math.h>

int main()
{
    double a, b, c;
    double x1, x2;
    printf("entrer le nombre a: ");
    scanf("%lf", &a);
    printf("entrer le nombre b: ");
    scanf("%lf", &b);
    printf("entrer le nombre c: ");
    scanf("%dlf", &c);

    int eq = b * b - 4 * a * c;

    if (eq > 0)
    {
        x1 = (-b + sqrt(eq)) / (2 * a);
        x2 = (-b - sqrt(eq)) / (2 * a);

        printf("la solution et:x1 = %lf\n et x2 = %lf\n", x1, x2);
    }
    else if (eq == 0)
    {
        x1 = -b / (2 * a);
        printf("la solution est:%lf", x1);
    }
    else
        printf("ya pas de solution");
}