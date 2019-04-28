#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j;//i控制行数，j控制每行的*个数
	int k = 13;//k为给定的行数
	int a = (k + 1) / 2;
	//先打印前7行，每行*依次递增2个
	for (i = 1; i <= a; ++i) {
		for (j = 1; j <= 2 * i - 1; ++j) {
			printf("*");
		}
		printf("\n");
	}
	//打印后6行，每行*依次递减2个
	for (i = a - 1; i >= 1; --i) {
		for (j = 1; j <= 2 * i - 1; ++j) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
