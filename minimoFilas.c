#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLUMNAS 8
#define FILAS 5

void inicializa(int matriz[FILAS][COLUMNAS]){

	int _rand;

	for (int i = 0; i < FILAS; ++i){
		for (int j = 0; j < COLUMNAS; ++j){
			_rand=-10+(rand()%(-10-10));

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

int printMatriz1D(int matriz[FILAS]){

	printf("\n");

	for (int i = 0; i < FILAS; ++i)
	{
		printf("%i \t",matriz[i] );
	}
	printf("\n");
		
	printf("\n");
}

void minimoF(int matriz[FILAS][COLUMNAS], int valoresMinimos[FILAS]){

	for (int i = 0; i < FILAS; ++i)
	{
		valoresMinimos[i] = matriz[i][0];

		for (int j = 0; j < COLUMNAS; ++j)
		{
			if (valoresMinimos[i] > matriz[i][j])
			{
				valoresMinimos[i] = matriz[i][j];
			}
		}
	}
}


int main(int argc, char const *argv[])
{

	srand(time(NULL));
	
	int matriz[FILAS][COLUMNAS];
	int valoresMinimos[FILAS];

	inicializa(matriz);
	minimoF(matriz, valoresMinimos);

	printMatriz2D(matriz);
	printMatriz1D(valoresMinimos);

	return 0;
}