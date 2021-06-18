#include <bits/stdc++.h>

using namespace std;

int db(int n)
{

	if (n == 0)
	{
		return 0;
	}
	db(n / 2);
	cout << (n % 2);
	return 0;
}

int main()
{
	db(13);
}