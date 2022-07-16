#include<stdio.h>
#include<stdlib.h>

int main() {
	int a = 9;
	int n;
	printf("Input Divisor: ");
	scanf_s("%d", &n);
	switch (a % n) {
		case 0:
			printf("remainder is %d",a%4);
			break;
		case 1:
			printf("remainder is %d", a % 4);
			break;
		case 2:
			printf("remainder is %d", a % 4);
			break;
		default:
			printf("remainder is 3,4 or 5");
	}
	return 0;
}