#include <stdio.h>

void Print(void);
int main()
{
	Print();
	return 0;
}

void Print(void)
{
	printf("int main(void)\n{\n    return 0;\n}");
	return;
}