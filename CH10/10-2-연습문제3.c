#include <stdio.h>

void month2_intercalation(int *pa);

int main(void) {
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	month2_intercalation(month);

	printf("2���� �������ϼ��� %d", month[1]);

	return 0;

}


void month2_intercalation(int *pa) {

	int year;
	printf("������ �Ǵ� �⵵ �Է��Ͻÿ�.");
	scanf("%d", &year);
	if (year % 4 == 0) {
		if (year % 400 == 0) {
			pa[1] = 29;
		}
		else if (year % 100 == 0) {
			pa[1] = 28;
		}
		else {
			pa[1] = 29;
		}
	}
	/*
	if (year % 4 != 0) pa[1] = 28;
	else if (year % 100 != 0) pa[1] = 28;
	else if (year % 400 == 0) pa[1] = 29;
	else pa[1] = 29;
	*/		
}