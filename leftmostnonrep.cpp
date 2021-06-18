#include <bits/stdc++.h>
using namespace std;

int nonrepleft(string s)
{

	int count[256] = {0};

	for (int i = 0; i < s.length() - 1; i++)
	{
		count[s[i]]++;
	}

	for (int i = 0; i < s.length() - 1; i++)
	{
		if (count[s[i]] == 1)
		{
			return i;
		}
	}
	return -1;
}

int main()
{

	cout << nonrepleft("nirbhaysingh");
}