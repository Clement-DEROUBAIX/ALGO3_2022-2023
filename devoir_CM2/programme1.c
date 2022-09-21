#include <stdio.h>

int main()
{
    int n;
    printf("donner un entier: ");
    scanf("%d",&n);
    printf("l'entier donne est: %d\n",n);
    printf("l'adresse est: %d",&n);

    return 0;
}


