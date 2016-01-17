#include <stdio.h>

int main(void)
{
	int var = 10;
	while(var != 20)
	{
		if(var < 20)
		{
			var += 4;
			printf("%d\n", var);
		}
		else if(var > 20)
		{
			var -= 5;
			printf("%d\n", var);
		}
		else
		{
			printf("%d\n", var);
		}
	}
	return 0;
}
