#include<stdio.h>
#include<stdlib.h>

int main() {
	//�ݺ����� �̿��� ������.
	//����1. �Ҽ����ϱ� : prime number�� ����� 1�� �ڱ��ڽŻ��� ���̴�.
	//���� ����� ���غ���.
	/*
	int n = 1001;
	for (int i = 1; i <= n; ++i) {
		if (1001 % i == 0) printf("%d ", i);
	}
	����� ������ ���غ���
	int n = 1001;
	int count = 0;
	for (int i = 1; i <= n; ++i) {
		if (1001 % i == 0) count++;
	}
	printf("����� ����: %d", count);
	������ �Ҽ����� �ƴ��� �Ǻ��غ���.
	int n = 1001;
	int count = 0;
	for (int i = 1; i <= n; ++i) {
		if (1001 % i == 0) count++;
	}
	if (count == 2) printf("%d�� �Ҽ�\n", n);
	else printf("%d�� �Ҽ��� �ƴ�\n", n);
	
	1~10000 ������ �Ҽ��� ���غ���.
	int i,j, count;
	for (i = 1; i <= 10000; ++i) //1~10000���� ���� 
	{
		count = 0;
		for (j = 1; j <= i; ++j) {
			if (i % j == 0) count++;
		}
		if (count == 2) printf("%d ", i); //����� 2�����
	}
	
	���ǽ��� �ݺ��� �ȿ� �Ἥ Ż���Ű��
	int i, j, count;
	for (i = 1; ; ++i) //1~10000���� ���� 
	{
		count = 0;
		for (j = 1; j <= i; ++j) {
			if (i % j == 0) count++;
		}
		if (count == 2) printf("%d ", i); //����� 2�����
		if (i == 10001) break; //10000�� ������ Ż��
	}
	*/
	//continue�� �Ἥ �ڵ� ������ �Ѱܺ���
	int i,j,count;
	for (i = 1; i <= 10000; ++i) {
		count = 0;
		for (j = 1; j <= i; ++j) {
			if (i % j == 0) count++;
		}
		if (count != 2) continue; //�Ҽ��� �ƴϸ� �ѱ��. 
		printf("%d ", i);
	}
	return 0;
}