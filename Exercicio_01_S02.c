#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int tamanho_matriz = atoi(argv[1]);

	if( (argc - 2) == tamanho_matriz*tamanho_matriz ){

		int matriz[tamanho_matriz][tamanho_matriz];
		int x = 2;

		for( int i = 0; i < tamanho_matriz; i++){
			for( int j = 0; j < tamanho_matriz; j++){
				matriz[i][j] = atoi(argv[x]);
				x++;
			}
		}

		int matriz_resultante[tamanho_matriz][tamanho_matriz];

		for( int i = 0; i < tamanho_matriz; i++){
			for( int j = 0; j < tamanho_matriz; j++){
				matriz_resultante[i][j] = 0;
				for( int k = 0; k < tamanho_matriz; k++){
					matriz_resultante[i][j] += matriz[i][k]*matriz[k][j];
				}
			}
		}

		for( int i = 0; i < tamanho_matriz; i++){
			for( int j = 0; j < tamanho_matriz; j++){
				printf(" %d ", matriz_resultante[i][j]);
			}
		}
		return 1;

	}else {

		printf("Programa deveria ter %d argumentos!\n", (tamanho_matriz*tamanho_matriz));
		return 0;
	}

}
