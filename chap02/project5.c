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
	float kg;
	
	printf("������? ");
	scanf("%f", &kg);
	
	printf("�Է��� �����Դ� %.2f�Դϴ�.", kg);
	return;
}