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

	printf("Ŀ�� ������(S,T,G)? ");
	scanf("%c %d", &size, &n);
	printf("%c ������ %d���� �ֹ��մϴ�.", size, n);
	return;
}