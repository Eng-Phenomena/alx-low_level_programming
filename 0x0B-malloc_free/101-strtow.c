#include <stdlib.h>
#include "main.h"

/**
 * strtow - seperating words
 * @str: string
 * Return: 2d pointer
 */
int strcount(char *str);
int wordcount(char *str, int index);

char **strtow(char *str)
{
	char **words;
	int i = 0, height = 0, j = 0;
	int tmp = 0, wordcounts = 0;

	if (str == NULL)
		return (NULL);
	height = strcount(str);
	words = (char **) malloc(sizeof(char *) * height);

	for (i = 0; i < height; i++)
	{
		wordcounts = wordcount(str, i) + 1;
		words[i] = (char *) malloc(sizeof(char) * wordcounts);

		for (j = 0; j < wordcounts || str[j] != '\0'; j++)
		{
			words[i][j] = str[tmp];
			tmp++;
		}
		words[i][tmp] = '\0';

	}
	return (words);
}

/**
 * strcount - coiunting words in a string
 * @str: string
 * @Return: int words
 */

int strcount(char *str)
{
	int count = 0, i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			count++;
	}
	count++;
	return (count);
}

/**
 * wordcount - counts word letterr
 * @str: string
 * @tmp: index of word
 * Return: num of letters
 */

int wordcount(char *str, int index)
{
	int i = 0, count = 0, tmp = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		tmp++;
		if (str[i] == ' ')
			count++;
		if (count == (index + 1))
		{
			return (tmp);
		}
		else
		{
			tmp = 0;
		}
	}
	return (0);
}
