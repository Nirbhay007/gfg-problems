#include <bits/stdc++.h>

int rodcutting(int n, int a, int b, int c)
{
	if (n == 0)
	{
		return 0;
	}
	if (n < 0)
	{
		return -1;
	}

	int res = std::max(std::max(rodcutting(n - a, a, b, c), rodcutting(n - b, a, b, c)), rodcutting(n - c, a, b, c));

	if (res == -1)
	{
		return -1;
	}
	return 1 + res;
}

int main()
{
	std::cout << rodcutting(23, 11, 9, 12);
}