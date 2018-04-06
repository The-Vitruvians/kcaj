#include <stdio.h>

int count_div(int limit, int start, int num) {
	if(start > limit)
		return 0;
	if(start % num == 0)
		return 1 + count_div(limit, start+1, num);
	return 0 + count_div(limit, start+1, num);
}

void troca(int *n1, int *n2) {
	int aux;
	if(*n1 > *n2){
		aux = *n1;
		*n1 = *n2;
		*n2 = aux;
	}
}

int main(void) {
	int l, k, r, aux;
	scanf("%d %d %d", &l, &r, &k);
	troca(&r, &l);
	printf("%d\n", count_div(l, r, k));
	return 0;
}