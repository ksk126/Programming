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
	float f = 3.14159265;
	printf("%.2f\n", f);
	printf("%.4f\n", f);
	printf("%.6f\n", f);
	printf("%.8f\n", f);
	printf("%e\n", f);
	return;
}