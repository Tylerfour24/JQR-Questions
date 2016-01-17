#include <stdio.h>

int empty();

int main(void)
{
	int var = 0;
	while(var == 0)
	{
		var++;
		empty();
	}
	return 0;
}

int empty()
{
	printf("Printing F\n");
	return 0;
}
