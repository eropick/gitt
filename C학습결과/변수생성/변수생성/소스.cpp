#include<stdio.h>
#include<stdlib.h>

int main() {
	double pi = 3.14;
	unsigned int radius = 4;
	double area = 0;
	char a = 'a';
	area = pi * radius * radius;
	printf("Area of a circle with raius 4 is %.2f\n", area);
	printf("First of the alphabet is \"%c\"\n", a);
	return 0;
}