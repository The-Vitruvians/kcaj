#include <stdio.h>

int tempo(int n_pessoas, int soma, int tempo_anterior) {
	if(n_pessoas == 0)
		return soma;
	int temp;
	scanf("%d", &temp);
	if(temp - tempo_anterior <= 10) {
		soma += temp - tempo_anterior;
	} else {
		soma += 10;
	}
	return tempo(n_pessoas - 1, soma, temp);
}

int main(void) {
	int n_pessoas, tempo_1;
	scanf("%d %d", &n_pessoas, &tempo_1);
	printf("%d\n", tempo(n_pessoas-1, 10, tempo_1));
	return 0;
}