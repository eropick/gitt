//메인함수 이해하기

//표준 c에서 main 함수의 일반 형태
#include<stdio.h>
#include<stdlib.h>
#include <string.h> 
int main(int argc, char *argv[])
{
	//운영체제에서 가져오는 명령어들의 스트링이 어떻게 전달되는지
	int i=0,num1,num2;
	char* option;
	//argv[0]은 항상 경로에 있는 프로그램 이름이기 때문에 빼버린다.
	option = argv[++i];
	num1 = atoi(argv[++i]); //입력받은 명령어를 넘버1에 할당
	num2 = atoi(argv[++i]); //입력받은 명령어를 넘버2에 할당
	//두 문자열이 같은지 비교
	if (strcmp(option, "+a")==0) printf("%d + %d = %d\n", num1, num2, num1 + num2);
	else if(strcmp(option, "-a")==0) printf("%d - %d = %d\n", num1, num2, num1 - num2);
	else if (strcmp(option, "xa")==0) printf("%d x %d = %d\n", num1, num2, num1*num2);
	else if (strcmp(option, "/a")==0) printf("%d / %d = %.2lf\n", num1, num2, 1.0*num1/num2);
	else printf("없는 옵션임\n");
	//To do here
	return 0;
}


