#include <iostream>

using namespace std;

/**
 * leftRightDifference - calculates the absolute differences between left and right sums
 * of elements in a vector
 * @nums: the input vector of integers
 * Return: a vector containing the absolute difference between left and right sums
 */
vector<int> leftRightDifference(vector<int> &nums)
{
	int len = (int) nums.size();
	vector<int> dif(len);
	/** Ex: nums{10, 4, 8, 3} */

	vector<int> l_sum(len);
	vector<int> r_sum(len);

	l_sum[0] = 0;
	for (int i = 1; i < len; i++)
		l_sum[i] = l_sum[i - 1] + nums[i - 1];
	/**
	 * sum[0] = 0      = 0
   * sum[1] = 0 + 10 = 10
   * sum[2] = 10 + 4 = 14
   * sum[3] = 14 + 8 = 22
	 */

	r_sum[len - 1] = 0;
	for (int i = len - 2; i >= 0; i--) // 2
		r_sum[i] = r_sum[i + 1] + nums[i + 1];
	/**
	 * sum[3] =  0     = 0
	 * sum[2] =  3 + 0 = 3
	 * sum[1] =  8 + 3 = 11
	 * sum[0] = 11 + 4 = 15
	 */

	for (int i = 0; i < len; i++)
		dif[i] = abs(l_sum[i] - r_sum[i]);

	return dif;
}
