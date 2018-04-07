#include <stdio.h>

int main(void) {
	int n_x, n_y, n_z, c_x, c_y, c_z;
	scanf("%d %d %d %d %d %d", &c_x, &c_y, &c_z, &n_x, &n_y, &n_z);
	printf("%d\n", (n_x/c_x) * (n_y/c_y) * (n_z/c_z));
	return 0;
}