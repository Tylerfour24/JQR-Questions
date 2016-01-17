#include <stdio.h>

int main(void)
{
	int integer = 10;
	float floater = 1.0;
	double doubler = 10101010;
	char character = '1';
	long longer = 11001100;
	const char *string = "'Hello World.'";

	printf("%d is an integer\n%f is a float\n%lf is a double\n%c is a character\n%ld is a long\n%s is a string.\n", integer, floater, doubler, character, longer, string);

	integer -=1;
	floater -=1;
	doubler -=1;
	character -=1;
	longer -=1;
	string -=1;

	return 0;
}
