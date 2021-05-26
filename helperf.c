#include "factors.h"

/**
 * toInt - converts a string to an int.
 * @s: string to be converted.
 *
 * Return: number if string is num and -1 other wise.
 */
long int toInt(char *s)
{
	int i, sign = 0, offset = 0;
	long int num;

	if (s[0] == '-')
		sign = -1;
	if (sign == -1)
		offset = 1;
	else
		offset = 0;
	num = 0;
	for (i = offset; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + s[i] - '0';
		else
			num = -1;
	}
	if (sign == -1)
		num = -num;

	return (num);
}
