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
	
	printf("몸무게? ");
	scanf("%f", &kg);
	
	printf("입력한 몸무게는 %.2f입니다.", kg);
	return;
}