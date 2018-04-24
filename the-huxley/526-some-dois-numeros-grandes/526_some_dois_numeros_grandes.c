#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void soma(char *num1, char *num2, int p1, int p2, int resto_anterior) {
	if(p1 > 0){
		printf("%s %s\n", num1, num2);
		return;
	}
	if(p1 < 0 && p2 < 0){
		
		if(resto_anterior > 0) 
			printf("%d", resto_anterior);
		return;
	}
	int s, n1, n2;
	if(p1 >= 0 && p2 >= 0){
		n1 = num1[p1] - '0';
		n2 = num2[p2] - '0';
		s = n1 + n2 + resto_anterior;
		if(s >= 10) {
			resto_anterior = 1;
			s -= 10;
		} else {
			resto_anterior = 0;
		}
		soma(num1, num2, p1 - 1, p2 - 1, resto_anterior);
		printf("%d", s);
	} else {
		if(p1 >= 0){
			n1 = num1[p1] - '0';
			s = n1 + resto_anterior;
			if(s >= 10) {
				resto_anterior = 1;
				s -= 10;
			} else {
				resto_anterior = 0;
			}
			soma(num1, num2, p1 - 1, p2, resto_anterior);
			printf("%d", s);
		}else if(p2 >= 0) {
			n1 = num2[p2] - '0';
			s = n1 + resto_anterior;
			if(s >= 10) {
				resto_anterior = 1;
				s -= 10;
			} else {
				resto_anterior = 0;
			}
			soma(num1, num2, p1, p2 - 1, resto_anterior);
			printf("%d", s);
		}
	}
}


int main(void) {
	char number_1[1000], number_2[1000];
	scanf("%s", number_1);
	int t_n_1 = strlen(number_1);
	scanf(" %s", number_2);
	int t_n_2 = strlen(number_2);
	soma(number_1, number_2, t_n_1-1, t_n_2-1, 0);
	printf("\n\n\n\n\n");
	return 0;
}