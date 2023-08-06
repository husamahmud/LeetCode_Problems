#include <iostream>

using namespace std;

/**
 * removeDuplicates - remove the duplicates in-place such that each unique element appears only once
 * @nums:	vector of integers
 *
 * Return: length of the modified vector without duplicates
 */
int removeDuplicates(vector<int> &nums)
{
	int l = 1;
	int r;
	int len = (int) nums.size();

	for (r = 1; r < len; r++)
		if (nums[r] != nums[r - 1])
			nums[l++] = nums[r];

	return (l);
}
