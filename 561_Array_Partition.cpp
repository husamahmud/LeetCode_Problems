#include <iostream>

using namespace std;

/**
 * arrayPairSum - calculates maximum the sum of all possible pairings
 * @nums: the input vector of integer
 *
 * Return: the maximum sum of the all possible pairings
 */
int arrayPairSum(vector<int> &nums)
{
	int len = (int) nums.size();
	int i;
	int sum = 0;

	sort(nums.begin(), nums.end());

	for (i = 0; i < len; i += 2)
		sum += nums[i];

	return (sum);
}
