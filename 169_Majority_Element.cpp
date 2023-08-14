#include <iostream>

using namespace std;

/**
 * majorityElement - find the majority element in the given vector
 * @nums: the vector of inegers
 *
 * Return: the majority element
 */
int majorityElement(vector<int> &nums)
{
	int majority = nums[0];
	int cnt = 1;

	for (int num: nums)
	{
		if (num == majority)
			cnt++;
		else
		{
			cnt--;
			if (cnt == 0)
			{
				majority = num;
				cnt = 1;
			}
		}
	}

	return (majority);
}

/**
 * By sorting the array, the majority element will always be in the middle
 * position of the sorted array. This approach works because the majority
 * element, by definition, occurs more frequently than any other element,
 * so it will occupy the central position after sorting.
 */
int majorityElement(vector<int> &nums)
{
	int mid;

	sort(nums.begin(), nums.end());
	mid = nums[nums.size() / 2];

	return (mid);
}

