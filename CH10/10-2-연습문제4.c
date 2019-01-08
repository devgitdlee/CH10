#include <stdio.h>

int print_month(int *pa, int size);

int main(void) {
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int size = sizeof(month) / sizeof(month[0]);

	print_month(month, size);

	return 0;

}


int print_month(int *pa, int size) {

	int i, cnt = 0;

	for (i = 0; i < size; i++) {
		printf("%d ", pa[i]);
		cnt++;
		if (cnt % 5 == 0) printf("\n");
	}


}