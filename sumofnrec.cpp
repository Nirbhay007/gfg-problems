#include <bits/stdc++.h>

using namespace std;

int sumtilln(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n + sumtilln(n - 1);
}

int main()
{
	cout << sumtilln(10);
}