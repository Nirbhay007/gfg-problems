#include <bits/stdc++.h>
using namespace std;

int ntoone(int n)
{
	if (n == 0)
	{
		return 0;
	}

	cout << n << " ";
	ntoone(n - 1);
	return 0;
}

int main()
{
	ntoone(13);
}