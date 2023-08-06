#include <iostream>

using namespace std;

/**
 * removeElement - remove all occurrences of a target value from a vector in-place
 * @nums: vector of integers
 * @val: target value to be removed
 *
 * Return: count of elements remaining in the modified vector
 */
int removeElement(vector<int> &nums, int val)
{
	/* removed represent the new logical end of the range after moving elements */
	auto removed = remove(nums.begin(), nums.end(), val);
	/* erase the elements from the new logical end to the end of the vector */
	nums.erase(removed, nums.end());

	return ((int) nums.size());
}
