#include <stdio.h>
#include <stdlib.h>

void inicia_vet(int *arr, int i, int limite) {
	if(i == limite)
		return;
	arr[i] = 0;
	inicia_vet(arr, i + 1, limite);
}

int percorre_buracos(int *buracos, int *buracos_verificados, int inicio, int pos_buraco) {
	if(buracos[pos_buraco] == inicio) {
		buracos_verificados[pos_buraco] = 1;
		return 1;
	}
	buracos_verificados[pos_buraco] = 1;
	percorre_buracos(buracos, buracos_verificados, inicio, buracos[pos_buraco]);
}

int qtd_buracos(int *buracos, int *buracos_verificados, int pos_buraco, int limite) {
	if(pos_buraco == limite) {
		return 0;
	}
	if(buracos_verificados[pos_buraco] == 0) {
		percorre_buracos(buracos, buracos_verificados, pos_buraco, pos_buraco);
		return 1 + qtd_buracos(buracos, buracos_verificados, pos_buraco + 1, limite);
	} else {
		return 0 + qtd_buracos(buracos, buracos_verificados, pos_buraco + 1, limite);
	}
}

void le_buracos(int *buracos, int i, int limite) {
	if(i == limite) {
		return;
	}
	scanf("%d", &buracos[i]);
	le_buracos(buracos, i + 1, limite);
}

int main(void) {
	int *buracos, *buracos_verificados, n;
	scanf("%d", &n);
	buracos = (int *) malloc(sizeof(int) * n);
	buracos_verificados = (int *) malloc(sizeof(int) * n);
	inicia_vet(buracos_verificados, 0, n);
	le_buracos(buracos, 0, n);
	printf("%d\n", qtd_buracos(buracos, buracos_verificados, 0, n));
	return 0;
}