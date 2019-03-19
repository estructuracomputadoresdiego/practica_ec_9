#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

void inicializa(int matriz[TAM][TAM]){

	int _rand;

	for (int i = 0; i < TAM; ++i)
	{
		for (int j = 0; j < TAM; ++j)
		{
			_rand=1+(rand()%(11-1));

			matriz[i][j]=_rand;
		}
	}
}

int multiplica(int matrizA[TAM][TAM], int matrizB[TAM][TAM], int matrizC[TAM][TAM]){


	for (int i = 0; i < TAM; ++i)
	{
		
		for (int j = 0; j < TAM; ++j)
		{
			
			for (int k = 0; k < TAM; ++k)
			{
				
				matrizC[i][j] = matrizC[i][j] + (matrizA[i][k] * matrizB[k][j]);

			}
		}
	}
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
	int matrizA[TAM][TAM];
	int matrizB[TAM][TAM];
	int matrizC[TAM][TAM] = {0};

	srand(time(NULL));

	inicializa(matrizA);
	inicializa(matrizB);

	multiplica(matrizA, matrizB, matrizC);

	printf("Matriz A:\n");
	printMatriz(matrizA);
	printf("Matriz B:\n");
	printMatriz(matrizB);
	printf("Matriz C:\n");
	printMatriz(matrizC);	

	return 0;
}