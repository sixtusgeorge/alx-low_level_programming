#include "main.h"
/**
 * check - checks to see if number is prime
 * @a:int
 * @b:int
 * Return:int
 */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
