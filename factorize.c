#include "main.h"

/**
* factorial - factorizes numbers
* @lineptr: pointer to address of the numbers
*
* Return: prints factorial of a number
*/
void factorial(char *lineptr)
{
	long long int num;
	long long int i;

	num = atoi(lineptr);

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%lld=%lld*%lld\n", num, num / i, i);
			break;
		}
	}
}
