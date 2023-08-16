#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - addition
 * @a: int 1
 * @b: int 2
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction
 * @a: int 1
 * @b: int 2
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: int 1
 * @b: int 2
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: int 1
 * @b: int 2
 * Return: int
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulu
 * @a: int 1
 * @b: int 2
 * Return: int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
