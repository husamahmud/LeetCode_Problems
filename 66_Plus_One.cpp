#include <iostream>

using namespace std;

/**
 * plusOne - increment the large integer by one
 * @digits: reference to a vector of integer representing a number
 *
 * Return: the modified vector of digits after incrementing by 1
 */
vector<int> plusOne(vector<int> &digits)
{
	int len = (int) digits.size();
	int i;
	int carry = 1;

	if (digits[len - 1] != 9)
	{
		digits[len - 1] += 1;
		return (digits);
	}

	for (i = len - 1; i >= 0; --i)
	{
		/* add the carry value to current digit */
		digits[i] += carry;
		/* update the carry value */
		carry = digits[i] / 10;
		/* update the current digit */
		digits[i] %= 10;
	}

	if (carry != 0)
		digits.insert(digits.begin(), carry);

	return (digits);
}
