#include <iostream>

using namespace std;

/**
 * divideString - This function partitions a string `s` into groups of size `k`
 * @s: the input string to be partitioned
 * @k: the size of each group
 * @fill: the character to fill the last group if necessary
 *
 * Returns: a vector of strings representing the groups obtained by partitioning `s`
 */
vector<string> divideString(string s, int k, char fill)
{
	vector<string> divided{};
	int i;
	int len = (int) s.size();
	int rem = len % k;

	for (i = 0; i < len; i += k)
		divided.push_back(s.substr(i, k));

	if (rem != 0)
		for (i = 0; i < k - rem; i++)
			divided.back().push_back(fill);

	return (divided);
}
