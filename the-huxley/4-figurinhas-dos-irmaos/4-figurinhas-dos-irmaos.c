#include <stdio.h>
#include <stdlib.h>

void le_figurinhas(int *fig_maria, int *fig_joao, int *qtd_joao, int *qtd_maria, int n) {
	if(n == 0) {
		return;
	}
	int id;
	scanf("%d", &id);
	if(id % 2 == 0) {
		fig_joao[(*qtd_joao)++] = id;
	} else {
		fig_maria[(*qtd_maria)++] = id;
	}
	le_figurinhas(fig_maria, fig_joao, qtd_joao, qtd_maria, n - 1);
}

void troca(int *x, int *arr, int i, int limite) {
	int aux;
	if(i == limite) {
		return;
	}
	if(*x > arr[i]) {
		aux = arr[i];
		arr[i] = *x;
		*x = aux;
	}
	troca(x, arr, i + 1, limite);
}

void percorre(int *vet, int i, int limite) {
	if(i == limite) {
		return;
	}
	troca(&vet[i], vet, i + 1, limite);
	percorre(vet, i + 1, limite);
}

void determina_soma(int *soma, int *fig, int n, int i) {
	if(i == n) {
		return;
	}
	if(fig[i] == fig[i + 1]) {
		determina_soma(soma, fig, n, i + 1);
	} else {
		*soma += fig[i];
		determina_soma(soma, fig, n, i + 1);
	}
}

int main(void) {
	int n, soma_maria = 0, soma_joao = 0;
	scanf("%d", &n);
	int *figurinhas_maria = (int *)malloc(sizeof(int) * n);
	int *figurinhas_joao = (int *)malloc(sizeof(int) * n);
	int qtd_joao = 0, qtd_maria = 0;
	le_figurinhas(figurinhas_maria, figurinhas_joao, &qtd_joao, &qtd_maria, n);
	percorre(figurinhas_joao, 0, qtd_joao);	
	determina_soma(&soma_joao, figurinhas_joao, qtd_joao, 0);
	percorre(figurinhas_maria, 0, qtd_maria);
	determina_soma(&soma_maria, figurinhas_maria, qtd_maria, 0);
	printf("%d\n%d\n%d\n", qtd_joao, qtd_maria, (soma_maria > soma_joao) ? soma_maria : soma_joao);
	return 0;
}