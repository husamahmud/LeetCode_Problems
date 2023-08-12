#include <iostream>

using namespace std;

/**
 * buyChoco - find the maximum remaining money after buying
 * two chocolates from the given prices within the budget
 * @prices: a vector of integers representing the prices of the chocolates
 * @money the available budget for buying the chocolates.
 *
 * Return: the maximum remaining money after buying two chocolates within the budget
 */
int buyChoco(vector<int> &prices, int money)
{
	int i;
	int sum;

	sort(prices.begin(), prices.end());

	for (i = 0; i < prices.size() - 1; i++)
	{
		sum = prices[i] + prices[i + 1];
		if (sum <= money && sum > 0)
			return (money - sum);
	}

	return (money);
}
