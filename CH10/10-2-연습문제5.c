#include <stdio.h>

void reverse(double *pa, int size);

int main(void) {
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };

	reverse(ary, sizeof(ary) / sizeof(*ary));

	return 0;
}

void reverse(double *pa, int size) {
	int i;

	for (i = size-1; i >= 0; i--) {
		printf("%.1lf ", pa[i]);
	}
}