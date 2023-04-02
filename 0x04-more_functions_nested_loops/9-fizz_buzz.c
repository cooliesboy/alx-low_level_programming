#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for mu;tiples of three prints Fizz instead of the number
 * and for multiples of five prints Buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	inti;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			print("Fiiz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			print("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			print("FizzBuzz");
		} else if (i == 1)
		{
			print("%d", i);
		} else
		{
			print("%d", i);
		}
	}
	print("\n");
	return (0)
}
