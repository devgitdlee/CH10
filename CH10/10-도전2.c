#include <stdio.h>

int chech_same(int *lotto_nums, int *my_nums) {
	int i, j, cnt = 0;

	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (lotto_nums[i] == my_nums[j]) cnt++;
		}
	}
	return cnt;
}

int main(void) {
	int lotto_nums[6] = { 4, 10, 25, 30, 41, 45 };
	int my_nums[6] = { 4, 10, 25, 30, 41, 45 };
	int cnt;
	
	cnt = chech_same(lotto_nums, my_nums);
	printf("일치하는 번호의 개수 : %d", cnt);

	return 0;

}