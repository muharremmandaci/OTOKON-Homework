/* Libraries */
#include <stdio.h>

/* Function Prototypes */
int fibonacci(int );
int calculate();

/* Main Function */
int main()
{
	calculate();

	return 0;
}

/* Function Decleration */
int fibonacci(int limit)
{
	int numbers[200];
	int x = 2;

	numbers[0] = 1;
	numbers[1] = 1;
 
 	/* Find Fibonacci Numbers */
	while(!(numbers[x-1] + numbers[x-2] >= limit))
	{
		numbers[x] = numbers[x-1] + numbers[x-2];
		x++;
	}

	/* Print Numbers */
	int i;
	for (i = 0; i < x; i++)
	{
		printf("%d\n", numbers[i]);
	}
}

int calculate()
{
	/* Variables */
	int limit = 0;
	char choice = 'e';

	while(1)
	{
		printf("limit giriniz : ");
		scanf("%d",&limit);

		if (limit <= 2)
		{
			printf("ikiden kucuk bir deger giriniz. \n");
			continue;
		}
		else
		{
			fibonacci(limit);
		}

		/* Restart */
		while(1)
		{
			printf("Tekrar denemek istiyor musunuz? [e/h]:");
			scanf(" %c", &choice);
			
			if (choice == 'e')
			{
				break;
			}
			else if (choice == 'h')
			{
				return 0;
			}
			else 
			{
				printf("Gecersiz girdi. Lutfen e ya da h giriniz.\n");				
			}
		}
	}
}

