#include <string>

using namespace std;

/**
 * strStr - search for a substring in a string
 * @haystack: the string to search in
 * @needle: the string to search for
 *
 * Return: return the first occurrence of the substring,
 * 				or (-1) if the substring is not found
 */
int strStr(string haystack, string needle)
{
	int i, j;
	int pos;
	int str_len = (int) haystack.length();
	int sub_len = (int) needle.length();
	bool flag;

	for (i = 0; i <= (str_len - sub_len); i++)
	{
		pos = i;
		flag = true;

		for (j = 0; j < sub_len; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				flag = false;
				pos = -1;
				break;
			}
		}

		if (flag)
			return (pos);
	}

	return (pos);
}
