#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	double area;
	unsigned int num;
	//�������� �Է¹޾� ������ ���ϴ� ���α׷�
	printf("�������� �Է��ϼ���: ");
	scanf_s("%d", &n);
	area = n * n * 3.14;
	printf("������? %10.2f", area);
	//�й� �Է¹޴� ���α׷�
	printf("\n�й��� �Է��ϼ���: ");
	scanf_s("%d", &num);
	printf("�� �л��� ���г⵵�� %04d�� �Դϴ�.\n", num/100000);
	printf("�� �л��� �й� �� ��ȣ�� %05d �Դϴ�.\n", num%100000);
	//�Էµ� ���� �������� �� ������
	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &num);
	printf("2�� ���� ������ %d\n", num % 2);
	return 0;
}