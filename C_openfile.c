#include <stdio.h>

int main(void) 
{
	FILE *pointer;
	pointer = fopen("Ctester.txt", "r");
	fclose(pointer);
}
