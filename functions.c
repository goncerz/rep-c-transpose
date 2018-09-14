//#include <iostream>
#include <stdio.h>

int** createMatrix(int n, int m) {
	int** A = NULL;
	int i;
	int j;
	//A = new int*[n];
	A = (int**)malloc(n * sizeof(int*));

	for (i = 0; i < n; i++) {
		*(A + i) = (int*)malloc(m * sizeof(int));

		for (j = 0; j < m; j++) {
			*(*(A + i) + j) = -9 + rand() % 19;
		}
	}

	return A;
}


void printMatrix(int** A, int n, int m) {
	int i;
	int j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%4d ", *(*(A + i) + j));
		}
		printf("\n");
	}
}


void deleteMatrix(int** A, int n) {
	int i;
	for (i = 0; i < n; i++) {
		free(*(A + i));
	}

	free(A);
	A = NULL;
}


int** transposeMatrix(int** A, int n, int m) {
	int i;
	int j;
	int** B = NULL;
	B = (int**)malloc(m * sizeof(int*));

	for (i = 0; i < m; i++) {
		*(B + i) = (int*)malloc(n * sizeof(int));

		for (j = 0; j < n; j++) {
			*(*(B + i) + j) = *(*(A + j) + i);
		}
	}

	return B;
}
