#include <stdio.h>

void func1();
int func2(int value);

int main(void)
{
	func1();
	return 0;
}

void func1()
{
	int value = 0;
	while(value < 50)
	{
		value = func2(value);
		printf("%d\n", value);
	}
}

int func2(int value)
{
	value += 1;
	value *= 2;
	return(value);
}
