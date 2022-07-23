#include<stdio.h>
#include<string.h>

int main() {
	//문장에서 모음의 개수를 구해라
	char str[1000];
	int len,count=0;
	printf("문장을 입력하세요: ");
	scanf_s("%[^\n]s", str, sizeof(str));
	len=strlen(str);
	for (int i = 0; i <= len; ++i) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') count++;
	}
	printf("모음의 개수는 %d개다.\n", count);
	return 0;
}