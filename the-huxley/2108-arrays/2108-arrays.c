#include <stdio.h>
#include <stdlib.h>

void ordena(int *arr, int i, int j, int limite) {
	if(i == limite) {
		return;
	}
	if(j == limite) {
		ordena(arr, i + 1, i + 2, limite);
	} else {
		int aux;
		if(arr[i] > arr[j]) {
			aux = arr[i];
			arr[i] = arr[j];
			arr[j] = aux;
		}
		ordena(arr, i, j + 1, limite);
	}
}

void le_arr(int *arr, int i, int limite) {
	if(i == limite) 
		return;
	scanf("%d", &arr[i]);
	le_arr(arr, i + 1, limite);
}

void print(int *arr, int i, int limite) {
	if(i == limite){
		printf("\n");
		return;
	}
	printf("%d ", arr[i]);
	print(arr, i + 1, limite);
}

int main(void) {
	int k, m, a, b, *arr_a, *arr_b;
	scanf("%d %d %d %d", &a, &b, &k, &m);
	arr_a = (int *) malloc(a * sizeof(int));
	arr_b = (int *) malloc(b * sizeof(int));
	le_arr(arr_a, 0, a);
	le_arr(arr_b, 0, b);
	ordena(arr_a, 0, 1, a);
	ordena(arr_b, 0, 1, b);
	if(arr_a[k-1] < arr_b[b - m]){
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}