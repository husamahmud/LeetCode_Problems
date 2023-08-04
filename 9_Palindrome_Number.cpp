/**
 * isPalindrome - determines whether an integer is a palindrome
 * @nums: the integer to check
 *
 * Return: True if the integer is a palindrome, false otherwise
 */

bool isPalindrome(int x)
{
	unsigned int rev = 0;
	int orig = x;
	int digit;

	while (x > 0)
	{
		digit = x % 10;
		rev = rev * 10 + digit;
		x /= 10;
	}
	return (orig == rev);
}
