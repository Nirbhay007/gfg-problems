#include <bits/stdc++.h>

using namespace std;

//factorial using tail recursion -> as tail recursion optimizes the code to run faster as the last thing the recursion
// as the recursive call is the last thing inside the function

int fact(int n, int k = 1)
{
	if (n == 0 || n == 1)
	{
		return k;
	}
	return fact(n - 1, n * k);
}
int oneton(int n)
{

	if (n == 0)
	{
		return 0;
	}
	oneton(n - 1);
	cout << n << " ";
	return 0;
}

int main()
{
	oneton(12);
	cout << fact(5);
}