#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

int main(void) {
    int n = 0;
	int m = 0;
	int** A = NULL;
	int** B = NULL;
	time_t t;

	srand(time(&t));

	do {
		printf("Podaj liczbe wierszy macierzy A: ");
		scanf("%d", &n);
	} while (n < 1);

	do {
		printf("Podaj liczbe kolumn macierzy A: ");
		scanf("%d", &m);
	} while (m < 1);
	printf("\n");

	A = createMatrix(n, m);
	printf("Macierz A:\n");
	printMatrix(A, n, m);
	printf("\n");

	B = transposeMatrix(A, n, m);
	printf("Transpozycja macierzy A:\n");
	printMatrix(B, m, n);
	printf("\n");

	deleteMatrix(A, n);
	deleteMatrix(B, m);

    return 0;
}
