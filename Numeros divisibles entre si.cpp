#include<stdio.h>

int main()
{
	int numero1 = 0;
	int numero2 = 0;

	printf("Ingresa un numero \n");
	scanf_s("%d", &numero1);
	printf("Ingresa otro numero \n");
	scanf_s("%d", &numero2);
	
	if (numero1 % numero2 == 0)
	{
		printf("%i Es divisible en %i", numero1, numero2);
		return 0;
	}
	if(numero2 % numero1 == 0)
	{
		printf("%i Es divisible en %i", numero2, numero1);
		
	}
	else
	{
		printf("Numeros no divisibles entre si");
	}
	

	return 0;
	
}