#include<stdio.h>
#include<stdlib.h>

int main() {
	//���� 10~1���� �ڿ����� ����ϴ� ���α׷�
	/*
	int i = 10;
	for (;;) {
		printf("%d ",i--);
		if (i == 0) break;
	}
	*/
	//���� 1~1000���� �ڿ��� �߿� 7�� ����� ����ϴ� ���α׷�
	/*
	for (int i = 1; i <= 1000; ++i) {
		if (i % 7 == 0) printf("%d ", i);
	}
	*/
	//����: Ű���忡�� ���� �ϳ��� �Է¹��� ���� 1~1000���� �ڿ��� �� �Է��� ������ ����� ������� ���� ����
	/*
	int num,sum = 0 ;
	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &num);
	for (int i = 1; i <= 1000; ++i) {
		if (i % num == 0) sum = sum + i;
	}
	printf("�Է��� ����� ��: %d", sum);
	*/
	//����: 2~1000������ �� �ڿ����� ���Ͽ� ����� ����.
	/*
	for (int i = 2; i <= 1000; ++i) {
		int count = 0;
		for (int j = 1; j <= i; ++j) {
			if (i % j == 0) count++;
		}
		printf("%d : %d\n", i, count);
	}
	*/
	//����: 1~ 100������ �ڿ����� ������ ��
	int sum = 0;
	for (int n = 1; n <= 100; ++n) {
		sum = sum + n * n;
	}
	printf("�ڿ��� ������ ��: %d",sum);
	return 0;
}