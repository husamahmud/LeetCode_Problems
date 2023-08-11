#include <iostream>

using namespace std;

/**
 * convertToBase7 - convert dec int to base 7 string
 * @num: integer to be converted
 *
 * Return: string in base 7
 */
string convertToBase7(int num)
{
	int power = 1;
	int digit;
	int sign = 0;
	int base7 = 0;
	string res;

	if (num == 0)
		return "0";

	if (num < 0)
	{
		num = -num;
		sign++;
	}

	while (num > 0)
	{
		digit = num % 7;
		base7 += digit * power;
		power *= 10;
		num /= 7;
	}

	if (sign)
		base7 = -base7;

	res = to_string(base7);
	return (res);
}
