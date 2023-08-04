#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check - checks
 * @str: arr
 * Return: 0
 */
int check(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))

	{
		if (!isdigit(str[count])) 
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - entry point
 * @argc: Count 
 * @argv: pointer arg
 *
 * Return: 0 
 */

int main(int argc, char *argv[])

{
	int count = 1, str_to_string, sum = 0;

	while (count < argc) 
	{
		if (check(argv[count]))

		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); 

	return (0);
}
