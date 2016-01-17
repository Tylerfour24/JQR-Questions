#include <stdio.h>

int main(int argc, char **argv)
{
	int argument = 1;
	for(; argument < argc; argument++)
	{
		printf("%s\n", argv[argument]);
	}
	return 0;
}
