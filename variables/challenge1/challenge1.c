#include <stdio.h>

int main(){
    char nom[10],prenom[10],sexe[10],mail[15];
    int age;
    printf("veeuillez entre vore nom: \n");
    scanf("%s",&nom);
    printf("veeuillez entre vore prenom: \n");
    scanf("%s",&prenom);
    printf("veeuillez entre vore age: \n");
    scanf("%d",&age);
    printf("veeuillez entre vore sexe: \n");
    scanf("%s",&sexe);
    printf("veeuillez entre vore email: ");
    scanf("%s",&mail);

    printf("les infos est:\nnom:%s\nPrenom:%s\nage:%dans\nsexe:%s\nadesse e-mail:%s\n",nom,prenom,age,sexe,mail);

    return 0;
}