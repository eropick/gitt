#include<stdio.h>
#include<string.h>

int main() {
	/*
	//x의 주소를 포인터 변수에 할당해보고 주소를 출력해보자
	int x;
	int* px;
	px = &x; //x라는 변수의 주소를 할당한다
	printf("%u", px); //주소 번지를 출력한다. unsigned int형식으로
	//다음 코드의 결과를 예측해보자
	int a = 1, b = 2, c = 100; //변수 3개에 값 할당
	int* pa = &a, * pb = &b, * pc = &c; //각 포인터 변수 pa,pb,pc선언후 위의 변수의 주소를 할당함
	*pc = *pa + *pb; //pc 포인터 변수의 메모리 영역에 pa의 값과 pb의 값의 합을 할당함.
	//이렇게 할 경우 결과적으로 *pc의 값은 3이 됨.
	printf("%d : %d \n", pc, *pc); //메모리 주소의 값: 메모리에 있는 데이터 3
	
	//포인터의 주소를 증가시켜 관계를 알아보자
	int n[5] = { 10,20,30,40,50 };
	int* pnt = n;
	printf("%d\n", *pnt); //배열n의 첫 요소의 주소를 담았으니까 10이 나온다.
	pnt++; //주소를 1증가시켰으므로
	printf("%d\n", *pnt); //두 번째 요소인 20이 나온다.
	//이 점을 이용해서 배열의 모든 요소를 하나씩 출력해보자
	pnt = n;
	for (int i = 0; i < sizeof(n) / sizeof(int); ++i) {
		printf("%d ", *pnt);
		pnt++;
	}
	//다음은 문자열을 포인터로 처리한다.
	char* s = (char*)"Hello,World."; //char s[] = "Hello,World.";
	int i;
	puts(s);
	for(i=0;i<strlen(s);++i) printf("%c\n", s[i]);
	//여기서 우리는 문자열 배열의 이름을 주소로 사용했음을 알 수 있다.
	*/
	//포인터 값을 증가시켜 str의 스트링을 거꾸로 출력해라;
	char str[] = "I love you more than you love me.";
	char* pstr = str;
	pstr = pstr + strlen(str);
	for (int i = strlen(str); i >= 0; --i) {
		printf("%c", *pstr);
		pstr--;
	}
	return 0;
}