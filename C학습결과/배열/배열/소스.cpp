#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*
	//�迭�� �����ϰ� �ʱ�ȭ�غ���
	int score[10]; //���� �迭�̴�.
	int num[] = {1111,2234,4252,5335}; //���� �ʱ�ȭ�ϸ鼭 �����ߴ�.
	//num�迭�� ���� ���� ���غ���.
	//int�� �迭 ���Ҵ� 1���� 4byte�� ũ�⸦ ���´� 
	int i,sum = 0;
	int max[2] = {0,}; //���� ū ����
	for (i = 0; i < (sizeof(num) / 4); ++i) {
		sum = sum + num[i];
	}
	printf("���ҵ��� ����? %d \n", sum);
	//����ؼ� ���� �Է¹޾� score�迭�� �־��
	//�����߿� ���� ū ������ ã�Ƽ� ���
	for (i = 0; i < 10; ++i) {
		printf("���� �Է��ϼ���(�ߴ��Ϸ��� -1�� �Է����ּ���): ");
		scanf_s("%d", &(score[i]));
		if (max[0] < score[i]) {
			max[0] = score[i]; //���� ����
			max[1] = i+1;  //���° ���� ����
		}
		if (score[i] == -1) break;
	}
	for (i = 0; ; ++i) {
		printf("��[%d]: %d\n",i+1,score[i]);
		if(score[i + 1] == -1 || i+1 == sizeof(score)/sizeof(score[0]))
		{
			printf("�������Դϴ�.\n���� ū ������ %d�̰� %d��° �Է��Դϴ�.\n",max[0],max[1]);
			break;
		}
	}
	*/
	//����ؼ� 100�� ���� �迭 ����, ������ ����ؼ� �Է¹ް� 0�� �Է¹����� ���ݱ��� �Է��� ������ ����, ��, ����� ����
	int num[100] = { 0, };
	int sum = 0;
	for (int i = 0; i < 100; ++i) 
	{
		printf("���� �Է��ϼ���: ");
		scanf_s("%d", &(num[i]));
		sum = sum + num[i]; //�� ���ϱ�
		if (num[i] == 0) {
			//0�� �����̹Ƿ� 0�� ������ ���� ����� �������� ��.
			printf("�Է��� ���� ������: %d\n����: %d\n�����: %.2lf�Դϴ�\n", i + 1, sum, sum / (i + 1) * 1.0);
			break;
		}
	}
	return 0;
}