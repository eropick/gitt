#include<stdio.h>
#include<string.h>

int main() {
	//���忡�� ������ ������ ���ض�
	char str[1000];
	int len,count=0;
	printf("������ �Է��ϼ���: ");
	scanf_s("%[^\n]s", str, sizeof(str));
	len=strlen(str);
	for (int i = 0; i <= len; ++i) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') count++;
	}
	printf("������ ������ %d����.\n", count);
	return 0;
}