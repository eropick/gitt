#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*
	//배열을 선언하고 초기화해보자
	int score[10]; //점수 배열이다.
	int num[] = {1111,2234,4252,5335}; //값을 초기화하면서 선언했다.
	//num배열의 값의 합을 구해보자.
	//int형 배열 원소는 1개당 4byte의 크기를 갖는다 
	int i,sum = 0;
	int max[2] = {0,}; //가장 큰 정수
	for (i = 0; i < (sizeof(num) / 4); ++i) {
		sum = sum + num[i];
	}
	printf("원소들의 합은? %d \n", sum);
	//계속해서 값을 입력받아 score배열에 넣어보자
	//정수중에 가장 큰 정수를 찾아서 출력
	for (i = 0; i < 10; ++i) {
		printf("값을 입력하세요(중단하려면 -1을 입력해주세요): ");
		scanf_s("%d", &(score[i]));
		if (max[0] < score[i]) {
			max[0] = score[i]; //점수 넣음
			max[1] = i+1;  //몇번째 인지 넣음
		}
		if (score[i] == -1) break;
	}
	for (i = 0; ; ++i) {
		printf("값[%d]: %d\n",i+1,score[i]);
		if(score[i + 1] == -1 || i+1 == sizeof(score)/sizeof(score[0]))
		{
			printf("마지막입니다.\n가장 큰 정수는 %d이고 %d번째 입력입니다.\n",max[0],max[1]);
			break;
		}
	}
	*/
	//계속해서 100개 원소 배열 선언, 정수를 계속해서 입력받고 0을 입력받으면 지금까지 입력한 정수의 갯수, 합, 평균을 구함
	int num[100] = { 0, };
	int sum = 0;
	for (int i = 0; i < 100; ++i) 
	{
		printf("수를 입력하세요: ");
		scanf_s("%d", &(num[i]));
		sum = sum + num[i]; //합 구하기
		if (num[i] == 0) {
			//0도 정수이므로 0을 포함한 값이 평균이 구해져야 함.
			printf("입력한 정수 개수는: %d\n합은: %d\n평균은: %.2lf입니다\n", i + 1, sum, sum / (i + 1) * 1.0);
			break;
		}
	}
	return 0;
}