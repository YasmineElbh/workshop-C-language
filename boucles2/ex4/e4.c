#include <stdio.h>

int main(){
    int n, m;
    printf("entrer les nombre: ");
    scanf("%d",&n);

    while(n != 0)
    {
        m = n % 10;
        n = n / 10;
        
        printf("%d", m);
    }

}