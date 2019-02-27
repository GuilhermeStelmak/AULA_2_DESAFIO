//Exercicio Bonus

#include <stdio.h>

int main() 
{
	int A=0;
	int B=0;

	printf ("Informe um valor inteiro para A: \n");
	
	scanf ("%i", &A);
	
	printf ("Informe um valor inteiro para B: \n");
	
	scanf ("%i", &B);
	
	if (A>B)
	{
		printf("\n  \n  A eh maior que B");
	}
	else
	{
		if(A<B)
		{
			printf("\n \n A eh menor que B");
		}
		else
		{
			printf("\n \n A eh igual a B");
		}
	}
	return 1;
}
