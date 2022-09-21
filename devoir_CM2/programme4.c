#include <stdio.h>

int max_min(int *a,int *b,int *c, int *max, int *min)
{
    *max = *a;*min = *a;
    if (*b > *a && *b > *c)
        *max = *b;
    else if (*c > *b && *c > *a)
                *max = *c;

    if (*b < *a && *b < *c)
        *min = *b;
    else if (*c < *b && *c < *a)
                *min = *c;

    return(max_min);

}


int main()
{
    printf("donne 3 valeurs:\n");
    int a,b,c,max,min;
    scanf("%d%d%d",&a,&b,&c);
    max_min(&a,&b,&c,&max,&min);
    printf("la valeur maximale est %d\n",max);
    printf("la valeur minimale est %d\n",min);

    return 0;
}
