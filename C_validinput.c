#include <stdio.h>

int main(void)
{
	int choice;
	for (;;)
	{
		printf("Which of these colors is your favorite?\n1) Red\n2) Blue\n3) Green\n");

		scanf("%d",&choice);

		if(choice == 1)
		{
			printf("Red is your favorite color.\n");
			break;
		}
		else if(choice == 2)
		{
			printf("Blue is your favorite color.\n");
			break;
		}
		else if(choice == 3)
		{
			printf("Green is your favorite color.\n");
			break;
		}
		else
		{
			printf("Sorry, invalid selection.\n");
			break;
		}
	}
}
