string addBinary(string a, string b)
{
	string res;
	int len1 = a.length() - 1;
	int len2 = b.length() - 1;
	int carry = 0;
	int sum;

	while (len1 >= 0 || len2 >= 0)
	{
		sum = carry;

		if (len1 >= 0)
			sum += a[len1--] - '0';
		if (len2 >= 0)
			sum += b[len2--] - '0';

		(sum > 1) ? carry = 1 : carry = 0;
		res += to_string(sum % 2);
	}
	if (carry)
		res += to_string(carry);
	reverse(res.begin(), res.end());

	return (res);
}
