#include <stdio.h>

int main(void)
{
	int var = 10;
	while(var < 100)
	{
		var *= 2;
		printf("%d\n", var);
	}
	return 0;
}
