#include <stdio.h>
#include <stdlib.h>

void le_notas(int *notas, int tam, int i) {
	if(tam == i)
		return;
	scanf("%d", &notas[i]);
	le_notas(notas, tam, i + 1);
}

void buble(int *n, int t){
	int aux, i, j;
	for(i = 0; i < t; i++){
		for(j = i + 1; j < t; j++) {
			if(n[i] < n[j]) {
				aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
		}
	}
}

int diff(int *notas, int *notas_ord, int tam, int pos) {
	return (pos == tam) ? 0 : ((notas[pos] == notas_ord[pos]) ? 1 : 0) + diff(notas, notas_ord, tam, pos + 1);
}

void print(int *n, int qtd) {
	if(qtd == 0) {
		printf("%d ", n[qtd]);
		return;
	}
	print(n, qtd-1);
	printf("%d ", n[qtd]);
}

void arr_cpy(int *nota, int *notas_ord, int t) {
	if(t == 0){
		notas_ord[t] = nota[t];
		return;
	}
	arr_cpy(nota, notas_ord, t-1);
	notas_ord[t] = nota[t];
}

void loop(int n) {
	if(n == 0)
		return;
	int qtd_notas;
	scanf("%d", &qtd_notas);
	int *notas = (int *) malloc(sizeof(int) * qtd_notas);
	int *notas_ord = (int *) malloc(sizeof(int) * qtd_notas);
	le_notas(notas, qtd_notas, 0);
	arr_cpy(notas, notas_ord, qtd_notas-1);
	buble(notas_ord, qtd_notas);
	printf("%d\n", diff(notas, notas_ord, qtd_notas, 0));
}

int main(void) {
	int n;
	scanf("%d", &n);
	loop(n);
	return 0;
}