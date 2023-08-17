#include <iostream>

using namespace std;

/**
 * singleNumber - finds the number that appears only once in a given
 * @nums: refers to a vector of integers
 * Description: Using bitwise XOR operation
 * (A^A) = 0, (A^B^A) = B, (A^A^B) = (B^A^A) = (A^B^A) = B
 * Return: the single number that appears only once
 */
int singleNumber(vector<int> &nums)
{
	int res = 0;

	for (int num: nums)
		res ^= num;

	return (res);
}

/**
 * Description: Using Sorting algorithm
 */
int singleNumber(vector<int> &nums)
{
	int i;
	int len = (int) nums.size();

	sort(nums.begin(), nums.end());

	for (i = 1; i < len; i += 2)
		if (nums[i] != nums[i - 1])
			return (nums[i - 1]);

	return (nums[len - 1]);
}
