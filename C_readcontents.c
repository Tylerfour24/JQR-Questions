#include <stdio.h>

int main(void) 
{
	int thing;
	FILE *pointer;
	pointer = fopen("Ctester.txt", "r");
	if(pointer) {
		while((thing = getc(pointer)) != EOF) {
			putchar(thing);
		}
		fclose(pointer);
	}
}
