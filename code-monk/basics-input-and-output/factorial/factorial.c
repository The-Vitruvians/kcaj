#include <stdio.h>

int fat(int n) {
	if(n == 1 || n == 0)
		return 1;
	return n * fat(n-1);
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d\n", fat(n));
	return 0;
}