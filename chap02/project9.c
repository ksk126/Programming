#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main(void);

int main()
{
	Main();
	return 0;
}

void Main(void)
{
	int n;
	printf("16진수 정수? ");
	scanf("%x", &n);
	printf("16진수 %x는 10진수로 %d입니다.", n, n);
	return;
}