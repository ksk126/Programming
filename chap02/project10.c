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

	printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n");
	printf("����? ");
	scanf("%i", &n);

	printf(" 8����: %#o\n", n);
	printf("10����: %d\n", n);
	printf("16����: %#x\n", n);

	return;
}