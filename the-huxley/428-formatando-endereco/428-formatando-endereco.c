#include <stdio.h>

typedef struct endereco {
	char rua[100], bairro[100], cep[20], cidade[100], estado[100];
	int num_casa;
} _end;

_end le_endereco(void) {
	_end end;
	scanf(" %[^\n]s", end.rua);
	scanf("%d", &end.num_casa);
	scanf(" %[^\n]s", end.bairro);
	scanf(" %[^\n]s", end.cidade);
	scanf(" %[^\n]s", end.estado);
	scanf(" %[^\n]s", end.cep);
	return end;
}

void print(_end end) {
	printf("%s, %d.\nBairro: %s. Cep: %s\n%s/%s\n", end.rua, end.num_casa, end.bairro, end.cep, end.cidade, end.estado);
}

int main(void) {
	_end end;
	end = le_endereco();
	print(end);
	return 0;
}