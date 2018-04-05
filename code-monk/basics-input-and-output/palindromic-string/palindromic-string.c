#include <stdio.h>
#include <string.h>

int is_palindromic(char *str, int i, int j, int tam) {
	if(i*2 >= tam)
		return 1;
	if(str[i] == str[j]) {
		return is_palindromic(str, i+1, j-1, tam);
	} else {
		return 0;
	}
}

int main(void) {
	char str[100];
	int tam;
	scanf("%[^\n]s", str);
	tam = strlen(str);
	printf("%s\n", is_palindromic(str, 0, tam-1, tam) ? "YES" : "NO");
	return 0;
}