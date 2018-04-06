#include <stdio.h>

int mypow(int n, int exp) {
	if(exp == 0)
		return 1;
	else if(exp == 1)
		return n;
	return n * mypow(n, exp-1);
}

unsigned long long find_prod(int n, unsigned long long prod) {
	if(n == 0)
		return prod;
	int num;
	scanf("%d", &num);
	prod = (prod * num) % (mypow(10, 9) + 7);
	return find_prod(n - 1, prod);
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%llu\n", find_prod(n, 1));
	return 0;
}