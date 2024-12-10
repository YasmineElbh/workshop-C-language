#include <stdio.h>

int main(){
    int x = 2,y = 3,z = 5;
    if(x >= y && x >= z)
        printf(" le plus grand");
    else if(y >= x && y >= z)
        printf("y le plus grand");
    else
        printf(" z le plus grand");
}