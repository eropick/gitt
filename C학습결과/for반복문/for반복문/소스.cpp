#include<stdio.h>
#include<stdlib.h>

int main() {
	//예제 10~1까지 자연수를 출력하는 프로그램
	/*
	int i = 10;
	for (;;) {
		printf("%d ",i--);
		if (i == 0) break;
	}
	*/
	//예제 1~1000까지 자연수 중에 7의 배수만 출력하는 프로그램
	/*
	for (int i = 1; i <= 1000; ++i) {
		if (i % 7 == 0) printf("%d ", i);
	}
	*/
	//예제: 키보드에서 정수 하나를 입력받은 다음 1~1000까지 자연수 중 입력한 정수의 배수를 모두합한 값을 구함
	/*
	int num,sum = 0 ;
	printf("수를 입력하세요: ");
	scanf_s("%d", &num);
	for (int i = 1; i <= 1000; ++i) {
		if (i % num == 0) sum = sum + i;
	}
	printf("입력한 배수의 합: %d", sum);
	*/
	//예제: 2~1000사이의 각 자연수에 대하여 약수의 개수.
	/*
	for (int i = 2; i <= 1000; ++i) {
		int count = 0;
		for (int j = 1; j <= i; ++j) {
			if (i % j == 0) count++;
		}
		printf("%d : %d\n", i, count);
	}
	*/
	//예제: 1~ 100까지의 자연수의 제곱의 합
	int sum = 0;
	for (int n = 1; n <= 100; ++n) {
		sum = sum + n * n;
	}
	printf("자연수 제곱의 합: %d",sum);
	return 0;
}