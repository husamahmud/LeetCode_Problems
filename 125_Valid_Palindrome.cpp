#include <iostream>

using namespace std;

/**
 * isPalindrome - checks if the string is a palindrome
 * @s: the input string
 *
 * Return: true if the string is palindrome, false otherwise
 */
bool isPalindrome(const string &s)
{
	string res = {};
	int len = (int) s.length();
	int i;

	if (len == 0)
		return (true);

	for (char c: s)
		if (isalpha(c) || isdigit(c))
			res += tolower(c);

	len = (int) res.length();
	for (i = 0; i < len / 2; i++)
		if (res[i] != res[len - 1 - i])
			return (false);

	return (true);
}
