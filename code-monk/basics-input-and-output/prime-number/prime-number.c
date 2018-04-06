#include <stdio.h>
#include <math.h>

int is_prime(int num, int tests) {
	if(tests == num)
		return 1;
	if(num % tests == 0 || num % 2 == 0)
		return 0;
	return is_prime(num, tests + 2);
}

void primes(int num, int i) {
	if(i > num)
		return;
	if(i == 2) {
		printf("%d ", 2);
	} else {
		if(is_prime(i, 3))
			printf("%d ", i);
	}
	primes(num, i+1);
}

int main(void) {
	int N;
	scanf("%d", &N);
	primes(N, 2);
	printf("\n");
	return 0;
}