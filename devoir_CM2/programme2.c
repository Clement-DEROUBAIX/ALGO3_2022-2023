#include <stdio.h>

int main()
{
    char n;
    printf("donne un caractere: ");
    scanf("%c",&n);
    printf("le caractere donne est: %c\n",n);
    printf("l'adresse est: %d",&n);

    return 0;
}

