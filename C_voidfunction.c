#include <stdio.h>

void func(void);

int main(void)
{
	func();
	return 0;
}

void func(void)
{
	printf("This is a void function.\n");
	return;
}
