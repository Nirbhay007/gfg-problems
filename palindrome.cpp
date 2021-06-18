#include <bits/stdc++.h>
using namespace std;

int rev(int n)
{

	int temp = 0;
	int rem;
	while (n)
	{

		rem = n % 10;
		temp = temp * 10 + rem;

		n /= 10;
	}
	return temp;
}
int main()
{
	cout << rev(123);
}