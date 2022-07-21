#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	//대문자를 소문자로 소문자를 대문자로 변경
	/*
	char c;
	printf("input an alphabet : ");
	scanf_s("%c", &c);
	if (c >= 'A' && c <= 'Z') c = c + ('a' - 'A'); //알파벳 차이만큼 더해라 
	else if(c>='a' && c<='z') c = c - ('a' - 'A'); //알파벳 차이만큼 빼라
	printf("-->%c\n", c);
	
	본인이 아스키코드를 알고있다면 그냥 65~90까지 범위를 잡거나 32차이만큼 연산해주면 되지만
	모르면 다음과 같이 표기해도 된다.
	
	기본적으로 char1개의 크기는 1byte이다.
	따라서 문자형배열; 문자열의 경우 문자열의 크기로도 쓸 수 있다.
	char text[] = "i love you";
	printf("%d\n", sizeof(text)); //i공백love공백you 그리고 문자열의 끝을 나타내는 \로 인해 총 11크기가 된다.
	text[4] = '\0';
	printf("%s", text); //4번째 자리에서 끝이라고 인식해서 그 뒷문장이 출력이 안된다. 
	*/
	//실제로 문자열의 길이를 알아낼 때 strlen()함수를 사용한다.
	//배열이름만 사용하면 그거 자체로 배열의 첫 시작 주소이므로 주소연산자가 필요없다.
	//거꾸로 출력
	//scanf함수는 스페이스바(공백)나 엔터(줄바꿈)를 입력받으면 그 전까지의 입력만을 받아드린다.
	char AAA[30]="";
	printf("아무말이나 해: ");
	gets_s(AAA, sizeof(AAA)); 
	//scanf_s("%[^\n]s", AAA, sizeof(AAA)); 줄바꿈 입력전 모든 문자 받음.
	for (int i = strlen(AAA) - 1; i >= 0; --i) printf("%c", AAA[i]);
	return 0;
}