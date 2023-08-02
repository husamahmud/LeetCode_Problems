bool isValid(string str)
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
