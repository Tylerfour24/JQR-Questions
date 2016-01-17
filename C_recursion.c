#include <stdio.h>

void recursion(int count);

int main(void)
{
	int count = 20;
	recursion(count);
	return 0;
}

void recursion(int count)
{
	if (count >= 0)
	{
		printf("%d\n", count);
		count -= 1;
		if (count >= 0)
		{
			recursion(count);
		}
	}
}
