#include<stdio.h>
#include<stdlib.h>

int main() {
	//입력한 수가 홀수 짝수인지 구분?
	/*
	int num;
	printf("수를 입력하세요: ");
	scanf_s("%d", &num);
	if (num % 2 == 0) {
		printf("%d는 짝수입니다. \n", num);
	}
	else {
		printf("%d는 홀수입니다. \n", num);
	}
	*/
	//예제: 정수를 입력받아 이 숫자가 90이상이면 A 80이상이면 B 70이상이면 C 60 이상이면 D 그 외에는 F
	/*
	int num;
	printf("점수를 입력하시오: ");
	scanf_s("%d", &num);
	if (num >= 90) printf("A\n");
	else if (num >= 80) printf("B\n");
	else if (num >= 70) printf("C\n");
	else if (num >= 60) printf("D\n");
	else printf("F\n");
	*/
	//예제2: 키보드에서 두 실수를 입력받아 두 수의 차이값을 출력
	double num;
	double num2;
	printf("두 수를 입력하시오(예;2 4): ");
	scanf_s("%lf %lf", &num, &num2);
	if (num - num2 >= 0) printf("차이값은 %.2lf", num - num2);
	else printf("차이값은 %.2lf", num2 - num);
	return 0;
}