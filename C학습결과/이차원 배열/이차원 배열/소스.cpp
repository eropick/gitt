#include<stdio.h>

int main() {
	//0���� ���� 3���� 1���� ���� 3��
	int score[2][3] = { {89,92,95},{2,45,86}};
	int i, j,sum=0;
	for (i = 0; i < 2; ++i) {
		for (j = 0; j < 3; ++j) {
			printf("%d ", score[i][j]);
		}
		printf("\n");
	}
	//2���� �迭�� ����
	//0���� �� ��հ� 1���� �� ����� ���� ���ض�
	for (i = 0; i < 2; ++i) {
		sum = 0;
		for (j = 0; j < 3; ++j) {
			sum = sum + score[i][j];
		}
		printf("%.2lf \n",sum/3.0);
	}
	//�� �濡�� 3��°���� ����� ���ض�,
	for (i = 0; i < 3; ++i) {
		sum = 0;
		for (j = 0; j < 2; ++j) {
			if(i==2) sum = sum + score[j][i];
		}
	}
	printf("%.2lf \n", sum / 2.0);
	return 0;
}