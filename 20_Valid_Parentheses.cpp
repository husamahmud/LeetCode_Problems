#include <stack>
#include <iostream>

using namespace std;

/**
 * isValid - checks whether a string containing parentheses,
 * 					curly brackets, and square brackets is valid
 *
 * @str: The input string
 * Return: true if the string is valid, false otherwise
 */
bool isValid(const string &str)
{
	stack<char> stk;

	for (char c: str)
	{
		if (c == '(' || c == '{' || c == '[')
			stk.push(c);
		else
		{
			if (stk.empty())
				return false;

			char top = stk.top();
			stk.pop();

			if ((c == ')' && top != '(') || (c == '}' && top != '{') ||
			    (c == ']' && top != '['))
				return false;
		}
	}
	return stk.empty();
}
