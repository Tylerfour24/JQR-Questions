#include <stdio.h>

int main(void)
{
	int var = 1;
	for(; var <= 5; var++)
	{
		switch(var)
		{
			case 1:
				printf("Iteration One\n");
				break;
			case 2:
				printf("Iteration Two\n");
				break;
			case 3:
				printf("Iteration Three\n");
				break;
			case 4:
				printf("Iteration Four\n");
				break;
			case 5:
				printf("Iteration Five\n");
				break;
			default:
				printf("Technical Difficulties\n");
				var = 100;
				break;
		}
	}
	return 0;
}

			
