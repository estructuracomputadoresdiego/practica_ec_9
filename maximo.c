#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

void inicializa(int matriz[TAM][TAM]){

	int _rand;

	for (int i = 0; i < TAM; ++i)
	{
		for (int j = 0; j < TAM; ++j)
		{
			_rand=4+(rand()%(200-4));

			matriz[i][j]=_rand;
		}
	}
}

int maximoF(int matriz[TAM][TAM]){

	int numMax = matriz[0][0];

	for (int i = 0; i < TAM; ++i)
	{
		for (int j = 0; j < TAM; ++j)
		{
			
			if (numMax < matriz[i][j])
			{
				numMax = matriz[i][j];
			}
		}
	}
	return numMax;
}

int printMatriz(int matriz[TAM][TAM]){

	printf("\n");
	for (int j = 0; j < TAM; ++j)
	{
		for (int i = 0; i < TAM; ++i)
		{
			printf("%i \t",matriz[i][j] );
		}
		printf("\n");
	}	
	printf("\n");
}

int main(int argc, char const *argv[])
{
	srand(time(NULL));

	int matriz[TAM][TAM] = {0};
	int maximo;
	
	inicializa(matriz);
	printMatriz(matriz);

	maximo = maximoF(matriz);
	printf("\n");
	printf("EL valor maximo de la matriz es %d \n",maximo );

	return 0;
}