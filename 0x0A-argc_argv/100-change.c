#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counter
 * @argv: arr
 * Return: 0 
 */
int main(int argc, char *argv[])
{
	int num, j, result = 0;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= arr[j])
		{
			result++;
			num -= arr[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
