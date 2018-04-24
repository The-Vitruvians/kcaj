#include <stdio.h>
#include <stdlib.h>

void le_array(int *arr, int i, int limite) {
	if(i == limite) 
		return;
	scanf("%d", &arr[i]);
	le_array(arr, i + 1, limite);
}

int qtd_casas(int *tabuleiro, int i, int pulos, int q_casas) {
	return pulos == 0 ? 0 : tabuleiro[i] + qtd_casas(tabuleiro, (i + tabuleiro[i]) % q_casas, pulos-1, q_casas);
}

void define_ini(int maior_casas, int pos_maior, int ini, int limite, int *arr, int pulos) {
	if(ini == limite){
		printf("%d %d\n", pos_maior, maior_casas);
		return;
	}
	int qtd_c = qtd_casas(arr, ini, pulos, limite);
	return qtd_c > maior_casas ? define_ini(qtd_c, ini, ini + 1, limite, arr, pulos) : define_ini(maior_casas, pos_maior, ini + 1, limite, arr, pulos);
}

int main(void) {
	int n, pulos;
	scanf("%d %d", &n, &pulos);
	int *casas = (int *) malloc(sizeof(int) * n);
	le_array(casas, 0, n);
	define_ini(0, 0, 0, n, casas, pulos);
	return 0;
}