#include <iostream>

using namespace std;

/**
 * twoSum - finds the indices of two numbers in the given vector whose
 * 					sum equals the target
 * @nums: the vector of integers
 * @target: the target sum
 *
 * Return: vector containing the indices of the two numbers whose
 * 				sum equals the target, If no such pair exists, returns
 * 				a vector with a single element (-1)
 */
vector<int> twoSum(vector<int> &nums, int target)
{
	int len = nums.size();
	int i, j;

	for (i = 0; i < len; i++)
		for (j = i + 1; j < len; j++)
			if (nums[i] + nums[j] == target)
				return {i, j};

	return {-1};
}
