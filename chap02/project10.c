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

	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n");
	printf("정수? ");
	scanf("%i", &n);

	printf(" 8진수: %#o\n", n);
	printf("10진수: %d\n", n);
	printf("16진수: %#x\n", n);

	return;
}