#include<stdio.h>
#include<stdlib.h>

int main() {
	//반복문을 이용한 예제다.
	//예제1. 소수구하기 : prime number는 약수가 1과 자기자신뿐인 수이다.
	//먼저 약수를 구해보자.
	/*
	int n = 1001;
	for (int i = 1; i <= n; ++i) {
		if (1001 % i == 0) printf("%d ", i);
	}
	약수의 개수를 구해보자
	int n = 1001;
	int count = 0;
	for (int i = 1; i <= n; ++i) {
		if (1001 % i == 0) count++;
	}
	printf("약수의 개수: %d", count);
	다음은 소수인지 아닌지 판별해보자.
	int n = 1001;
	int count = 0;
	for (int i = 1; i <= n; ++i) {
		if (1001 % i == 0) count++;
	}
	if (count == 2) printf("%d은 소수\n", n);
	else printf("%d는 소수가 아님\n", n);
	
	1~10000 사이의 소수를 구해보자.
	int i,j, count;
	for (i = 1; i <= 10000; ++i) //1~10000까지 추출 
	{
		count = 0;
		for (j = 1; j <= i; ++j) {
			if (i % j == 0) count++;
		}
		if (count == 2) printf("%d ", i); //약수가 2개라면
	}
	
	조건식을 반복문 안에 써서 탈출시키자
	int i, j, count;
	for (i = 1; ; ++i) //1~10000까지 추출 
	{
		count = 0;
		for (j = 1; j <= i; ++j) {
			if (i % j == 0) count++;
		}
		if (count == 2) printf("%d ", i); //약수가 2개라면
		if (i == 10001) break; //10000이 넘으면 탈출
	}
	*/
	//continue를 써서 코드 실행을 넘겨보자
	int i,j,count;
	for (i = 1; i <= 10000; ++i) {
		count = 0;
		for (j = 1; j <= i; ++j) {
			if (i % j == 0) count++;
		}
		if (count != 2) continue; //소수가 아니면 넘긴다. 
		printf("%d ", i);
	}
	return 0;
}