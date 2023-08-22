#include <iostream>

using namespace std;

/**
 * isGood - check if the array is
 * @nums: the vector to check
 * Return: true if it is a permutation of an array base[n], false otherwise
 */
bool isGood(vector<int> &nums)
{
	int max = *max_element(nums.begin(), nums.end());
	int len = (int) nums.size();
	int i;

	if (len != max + 1)
		return (false);

	sort(nums.begin(), nums.end());

	if (max > 1 && nums[0] == max)
		return (false);

	for (i = 0; i < len; i++)
	{
		if (nums[i] == max)
			continue;

		if (nums[i] == nums[i + 1])
			return (false);
	}

	return (true);
}
