#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - entry point
 * @argc: counter
 * @argv: pointer to pointer
 * Return: 0
 */

int main(int argc, char **argv)
{
	unsigned int count = 0, i = 0;
	if (argc == 1)
	{
		printf("%d\n",0);
		return (0);
	}
	else{
		for (i = 1; i < argc; i++)
		{	
			char str[] = argv[i];

			while (count < strlen(str)) 
			{
				if (!isdigit(str[count])) 
				{
					printf("Error\n");
					return (1);
				}

				count++;
			}
		}
	}

	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
