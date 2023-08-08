#include <iostream>

using namespace std;

/**
 * lengthOfLastWord - count the length of the last word in a string
 * @str: the input string
 *
 * Return: the length of the last word in the string
 */
int lengthOfLastWord(string s)
{
	int len = 0;
	int i = (int) s.length() - 1;

	while (i >= 0 && isspace(s[i]))
		i--;

	while (i >= 0 && !isspace(s[i]))
		len++, i--;

	return (len);
}
