#include<stdio.h>
#include<string.h>

int main() {
	/*
	//x�� �ּҸ� ������ ������ �Ҵ��غ��� �ּҸ� ����غ���
	int x;
	int* px;
	px = &x; //x��� ������ �ּҸ� �Ҵ��Ѵ�
	printf("%u", px); //�ּ� ������ ����Ѵ�. unsigned int��������
	//���� �ڵ��� ����� �����غ���
	int a = 1, b = 2, c = 100; //���� 3���� �� �Ҵ�
	int* pa = &a, * pb = &b, * pc = &c; //�� ������ ���� pa,pb,pc������ ���� ������ �ּҸ� �Ҵ���
	*pc = *pa + *pb; //pc ������ ������ �޸� ������ pa�� ���� pb�� ���� ���� �Ҵ���.
	//�̷��� �� ��� ��������� *pc�� ���� 3�� ��.
	printf("%d : %d \n", pc, *pc); //�޸� �ּ��� ��: �޸𸮿� �ִ� ������ 3
	
	//�������� �ּҸ� �������� ���踦 �˾ƺ���
	int n[5] = { 10,20,30,40,50 };
	int* pnt = n;
	printf("%d\n", *pnt); //�迭n�� ù ����� �ּҸ� ������ϱ� 10�� ���´�.
	pnt++; //�ּҸ� 1�����������Ƿ�
	printf("%d\n", *pnt); //�� ��° ����� 20�� ���´�.
	//�� ���� �̿��ؼ� �迭�� ��� ��Ҹ� �ϳ��� ����غ���
	pnt = n;
	for (int i = 0; i < sizeof(n) / sizeof(int); ++i) {
		printf("%d ", *pnt);
		pnt++;
	}
	//������ ���ڿ��� �����ͷ� ó���Ѵ�.
	char* s = (char*)"Hello,World."; //char s[] = "Hello,World.";
	int i;
	puts(s);
	for(i=0;i<strlen(s);++i) printf("%c\n", s[i]);
	//���⼭ �츮�� ���ڿ� �迭�� �̸��� �ּҷ� ��������� �� �� �ִ�.
	*/
	//������ ���� �������� str�� ��Ʈ���� �Ųٷ� ����ض�;
	char str[] = "I love you more than you love me.";
	char* pstr = str;
	pstr = pstr + strlen(str);
	for (int i = strlen(str); i >= 0; --i) {
		printf("%c", *pstr);
		pstr--;
	}
	return 0;
}