#include<stdio.h>
#include<stdlib.h>

int main() {
	//while(Á¶°Ç)
	int i;
	i = 0;
	while (i < 10) {
		printf("%d\n", i);
		i++;
	}
	//do-while¹®
	i = 0;
	do {
		printf("%d\n", i);
		i++;
	} while (i < 10);
	return 0;
}