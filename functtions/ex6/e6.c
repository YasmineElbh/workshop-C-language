#include <stdio.h>

void fibonacci(int x){
    int fib = 0;
    int firs_v = 0;
    int second_val = 1;
    if(x == 0)
        fib = firs_v;
    else if(x == 1)
        fib = second_val;
    else
    {
        for (int i = 2; i <= x; i++){
            fib = firs_v + second_val;
            firs_v = second_val;
            second_val = fib;
        }
    }
    printf("%d",fib);

}
int main(){
    int a;
    printf("entrer le prmier nombre: ");
    scanf("%d",&a);
    // printf("entrer le deuxieme nombre: ");
    // scanf("%d",&b);
    fibonacci(a);
}