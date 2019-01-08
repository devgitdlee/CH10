#include <stdio.h>

void input_nums(int *lotto_nums) {
	int i, j;
	for (i = 0; i < 6; i++) {
		printf("번호입력:");
		scanf("%d", &lotto_nums[i]);
		for (j = 0; j < i; j++) {
			if (lotto_nums[j] == lotto_nums[i]) {
				printf("같은번호가 있습니다.!\n");
				i--;
				break;
			}
		}
	}
}

print_nums(int *lotto_nums) {
	int i;
	printf("로또 번호:");
	for (i = 0; i < 6; i++) {
		printf("%d ", lotto_nums[i]);
	}
}

int main(void) {
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}