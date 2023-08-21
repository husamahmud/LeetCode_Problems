#include <iostream>

using namespace std;

/**
 * climbStairs - calculates the number of distinct ways
 * to climb a staircase with 1 or 2 steps at a time
 * @n: the number of steps
 * Return: the number of distinct ways to climb the top
 */
int climbStairs(int n)
{
	vector<int> ways(n + 1);

	if (n <= 2)
		return (n);

	ways[1] = 1;
	ways[2] = 2;

	for (int i = 3; i <= n; i++)
		ways[i] = ways[i - 1] + ways[i - 2];

	return (ways[n]);
}
