#include <stdio.h>

int main(void) {

	double ary[5] = { 1.2, 3.5, 7.4, 0.5, 10.0 };
	double *pa = ary;
	double *pb = ary + 2;

	printf("%d\n", ary);
	printf("%.1lf\n", *(ary+1));
	printf("%d\n", pa+2);
	printf("%.1lf\n", pa[3]);
	printf("%.1lf\n", *pb);
	printf("%d\n", pb-pa);

	return 0;
}