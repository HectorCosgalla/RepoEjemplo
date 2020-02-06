#include "stdio.h"

int main() {
	int n;
	printf("Ingresa el valor de n:\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i%2 == 0) {
				if (j%2 == 0) {
					printf("#");
				} else {
					printf("+");
				}
			} else {
				if (j%2 == 0) {
					printf("+");
				} else {
					printf("#");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
