#include<stdio.h>
#include<stdlib.h>

int main() {
	//�Է��� ���� Ȧ�� ¦������ ����?
	/*
	int num;
	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &num);
	if (num % 2 == 0) {
		printf("%d�� ¦���Դϴ�. \n", num);
	}
	else {
		printf("%d�� Ȧ���Դϴ�. \n", num);
	}
	*/
	//����: ������ �Է¹޾� �� ���ڰ� 90�̻��̸� A 80�̻��̸� B 70�̻��̸� C 60 �̻��̸� D �� �ܿ��� F
	/*
	int num;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);
	if (num >= 90) printf("A\n");
	else if (num >= 80) printf("B\n");
	else if (num >= 70) printf("C\n");
	else if (num >= 60) printf("D\n");
	else printf("F\n");
	*/
	//����2: Ű���忡�� �� �Ǽ��� �Է¹޾� �� ���� ���̰��� ���
	double num;
	double num2;
	printf("�� ���� �Է��Ͻÿ�(��;2 4): ");
	scanf_s("%lf %lf", &num, &num2);
	if (num - num2 >= 0) printf("���̰��� %.2lf", num - num2);
	else printf("���̰��� %.2lf", num2 - num);
	return 0;
}