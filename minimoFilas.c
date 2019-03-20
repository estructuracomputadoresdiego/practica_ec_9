#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLUMNAS 8
#define FILAS 5

void inicializa(int matriz[FILAS][COLUMNAS]){

	int _rand;

	for (int i = 0; i < FILAS; ++i)
	{
		for (int j = 0; j < COLUMNAS; ++j)
		{
			_rand=1+(rand()%(11-1));

			matriz[i][j]=_rand;
		}
	}
}

int printMatriz2D(int matriz[FILAS][COLUMNAS]){

	printf("\n");
	for (int i = 0; i < FILAS; ++i)
	{
		for (int j = 0; j < COLUMNAS; ++j)
		{
			printf("%i \t",matriz[i][j] );
		}
		printf("\n");
	}	
	printf("\n");
}

int printMatriz1D(int matriz[COLUMNAS]){

	printf("\n");

	for (int i = 0; i < COLUMNAS; ++i)
	{
		printf("%i \t",matriz[i] );
	}
	printf("\n");
		
	printf("\n");
}

void minimoF(int matriz[FILAS][COLUMNAS], int valoresMinimos[COLUMNAS]){

	for (int j = 0; j < COLUMNAS; ++j)
	{
		valoresMinimos[j] = matriz[0][j];

		for (int i = 0; i < FILAS; ++i)
		{
			if (valoresMinimos[j] > matriz[i][j])
			{
				valoresMinimos[j] = matriz[i][j];
			}
		}
	}

}


int main(int argc, char const *argv[])
{

	srand(time(NULL));
	
	int matriz[FILAS][COLUMNAS];
	int valoresMinimos[COLUMNAS] = {0};

	inicializa(matriz);
	minimoF(matriz, valoresMinimos);

	printMatriz2D(matriz);
	printMatriz1D(valoresMinimos);

	return 0;
}