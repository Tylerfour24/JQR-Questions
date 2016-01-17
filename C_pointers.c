#include <stdio.h>

int main(void)
{
	int value = 10;
	int *pointer;
	pointer = &value;

	printf("%d\n", *pointer);
	printf("%p\n", (void *)pointer);
	return 0;
}
