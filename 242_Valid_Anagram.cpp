bool isAnagram(string s, string t)
{
	int i, j;

	if (s.size() != t.size())
		return (false);

	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	for (i = 0, j = 0; i < s.size(); i++, j++)
		if (s[i] != t[j])
			return (false);

	return (true);
}
