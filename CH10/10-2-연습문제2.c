#include <stdio.h>

int day31_find(int *pa, int size);

int main(void) {
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int size = sizeof(month) / sizeof(month[0]);
	int day31 = 0;

	day31 = day31_find(month, size);

	printf("�޿� �������ϼ��� 31���� ���� ������ %d", day31);

	return 0;

}


int day31_find(int *pa, int size) {

	int i, day31 = 0;

	for (i = 0; i < size; i++) {
		if (31 == pa[i]) day31++;
	}

	return day31;

}