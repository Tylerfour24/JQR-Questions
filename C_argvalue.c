#include <stdio.h>

int func(int value);

int main(void)
{
	int value = 10;
	int arg = func(value);
	printf("This didn't print inside of the function: %d\n", arg);
	return 0;
}

int func(int value)
{
	for(; value < 20; value++)
	{
		printf("%d\n", value);
	}
	return value;
}
