#include <stdio.h>

int main(void) {

	double ary[5] = { 1.2, 3.5, 7.4, 0.5, 10.0 };
	double *pa = ary;
	double sum = 0;
	int i;
	printf("배열 요소의 값:");
	for (i = 0; i < 5; i++) {
		printf("%.1lf\t", *pa);
		sum += *pa;
		pa++;
	}
	printf("\n");
	printf("평균: %.2lf", sum / 5);

	return 0;

}