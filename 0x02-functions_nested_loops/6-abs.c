#include "main.h"

/**
  * _abs - Gives the absolute value
  * of an integer.
  *
  * @n: Input number as an integer.
  *
  * Return: The absolute value of int n
  */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
