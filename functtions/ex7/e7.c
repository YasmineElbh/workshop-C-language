#include <stdio.h>
#include <string.h>

void inverse(char c[]){
    int len = strlen(c);
    char tmp;
    for(int i = 0; i < len / 2; i++){
        tmp = c[i];
        c[i] = c[len - 1 -i];
        c[len - 1 - i] = tmp;
        
    }
    printf("%s",c);
}

int main(){
    char a[100];
    printf("entrer les characteres: ");
    scanf("%s",&a);
    
    inverse(a);
}