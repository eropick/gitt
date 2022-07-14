#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	double area;
	unsigned int num;
	//반지름을 입력받아 면적을 구하는 프로그램
	printf("반지름를 입력하세요: ");
	scanf_s("%d", &n);
	area = n * n * 3.14;
	printf("면적은? %10.2f", area);
	//학번 입력받는 프로그램
	printf("\n학번을 입력하세요: ");
	scanf_s("%d", &num);
	printf("이 학생의 입학년도는 %04d년 입니다.\n", num/100000);
	printf("이 학생의 학번 뒷 번호는 %05d 입니다.\n", num%100000);
	//입력된 값을 나누었을 때 나머지
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &num);
	printf("2로 나눈 나머지 %d\n", num % 2);
	return 0;
}