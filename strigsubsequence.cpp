#include <bits/stdc++.h>
using namespace std;

bool subseq(string s1, string s2)
{

	int m = s1.length();

	int n = s2.length();

	int j = 0;
	for (int i = 0; i < n && j < m; i++)
	{

		if (s1[j] == s2[i])
		{
			j++;
		}
	}
	if (j == m)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{

	string s1 = "nirbhay";
	string s2 = "nirsinghbhay";

	cout << subseq(s1, s2);
}