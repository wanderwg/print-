#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j;//i����������j����ÿ�е�*����
	int k = 13;//kΪ����������
	int a = (k + 1) / 2;
	//�ȴ�ӡǰ7�У�ÿ��*���ε���2��
	for (i = 1; i <= a; ++i) {
		for (j = 1; j <= 2 * i - 1; ++j) {
			printf("*");
		}
		printf("\n");
	}
	//��ӡ��6�У�ÿ��*���εݼ�2��
	for (i = a - 1; i >= 1; --i) {
		for (j = 1; j <= 2 * i - 1; ++j) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
