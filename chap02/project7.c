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
	char size;
	int n;

	printf("커피 사이즈(S,T,G)? ");
	scanf("%c %d", &size, &n);
	printf("%c 사이즈 %d잔을 주문합니다.", size, n);
	return;
}