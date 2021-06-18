#include <bits/stdc++.h>

using namespace std;

bool subseq(string s1, string s2)
{

	int m = s1.length();
	int n = s2.length();
	if (m < n)
	{
		return false;
	}
	int j = 0;
	for (int i = 0; i < m && j < n; i++)
	{
		if (s1[i] == s2[j])
		{
			++j;
		}
	}

	return n == j;
}
bool recsubseq(string s1, string s2, int m, int n)
{

	if (n == 0)
	{
		return true;
	}
	if (m == 0)
	{
		return false;
	}
	if (s1[m - 1] == s2[n - 1])
	{
		return recsubseq(s1, s2, m - 1, n - 1);
	}
	else
	{
		return recsubseq(s1, s2, m - 1, n);
	}
}

int main()
{
	cout << recsubseq("nirbhay", "hir", 7, 3);
}