#include <stdio.h>

void swap(int *a, int *b)
{
    printf("la valeur de a est %d et la valeur de b est %d\n",*a,*b);
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("la nouvelle valeur de a est %d et la nouvelle valeur de b est: %d",*a,*b);
}



int main()
{
    int a,b;
    printf("donne deux valeurs a et b:\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);

    return 0;
}
