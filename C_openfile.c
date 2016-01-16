#include <stdio.h>

int main(void) 
{
	FILE *pointer;
	pointer = fopen("Ctester.txt", "w+");
	fclose(pointer);
}
