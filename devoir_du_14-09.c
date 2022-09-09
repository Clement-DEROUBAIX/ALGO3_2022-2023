#include <stdio.h>
int a;
int addition(int valeur1,int valeur2)
{
	int resultat;
	resultat = valeur1+valeur2+a;
	return(resultat);
}

int main()
{
    a=5;
	printf("%d",addition(2,3));
	printf("\n");
	printf("%d",addition(2,4));
	return 0;
}
