#include<stdio.h>
#include<ctype.h>


int main()
{
	int numero = 0;

	printf("Inserta un numero \n");
	
	if (scanf_s("%d", &numero) != 0)
	{
		if (numero >= 100 && numero <= 200)
		{
			printf("Esta dentro de los limites");
		}
		else
		{
			printf("No esta dentro de los limites");
		}
	}
	else {
		printf("Solo inserta numeros");
	}
	return 0;

}