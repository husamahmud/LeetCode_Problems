#include <iostream>

using namespace std;

vector<int> countBits(int n)
{
	int cnt;
	int num;
	int i;
	vector<int> ans(n + 1, 0);

	for (i = 0; i <= n; i++)
	{
		cnt = 0;

		num = i;
		while (num > 0)
		{
			if (num & 1)
				cnt++;
			num >>= 1;
		}
		ans[i] = cnt;
	}

	return (ans);
}
