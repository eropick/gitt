//�����Լ� �����ϱ�

//ǥ�� c���� main �Լ��� �Ϲ� ����
#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
int main(int argc, char *argv[])
{
	//�ü������ �������� ��ɾ���� ��Ʈ���� ��� ���޵Ǵ���
	int i=0,num1,num2;
	char* option;
	//argv[0]�� �׻� ��ο� �ִ� ���α׷� �̸��̱� ������ ��������.
	option = argv[++i];
	num1 = atoi(argv[++i]); //�Է¹��� ��ɾ �ѹ�1�� �Ҵ�
	num2 = atoi(argv[++i]); //�Է¹��� ��ɾ �ѹ�2�� �Ҵ�
	//�� ���ڿ��� ������ ��
	if (strcmp(option, "+a")==0) printf("%d + %d = %d\n", num1, num2, num1 + num2);
	else if(strcmp(option, "-a")==0) printf("%d - %d = %d\n", num1, num2, num1 - num2);
	else if (strcmp(option, "xa")==0) printf("%d x %d = %d\n", num1, num2, num1*num2);
	else if (strcmp(option, "/a")==0) printf("%d / %d = %.2lf\n", num1, num2, 1.0*num1/num2);
	else printf("���� �ɼ���\n");
	//To do here
	return 0;
}


