#include <stdio.h>

int main(void)
{
	int var = 5;
	do
	{
		var *= 10;
		printf("%d\n", var);
	}
	while (var < 10);
	return 0;
}
