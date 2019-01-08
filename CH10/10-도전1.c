#include <stdio.h>

void print_graph(int *ps, int size) {
	int i,j, cnt;

	for (i = 0; i < size; i++) {
		cnt = ps[i] / 5;
		printf("(%d)", ps[i]);
		for (j = 0; j < cnt; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int main(void) {

	int score[5] = { 72, 88, 95, 64, 100 };
	int size = sizeof(score) / sizeof(*score);
	print_graph(score, size);

	return 0;
}