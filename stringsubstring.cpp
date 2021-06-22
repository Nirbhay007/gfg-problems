#include <bits/stdc++.h>
using namespace std;

bool substring(string s1, string s2)
{

	int m = s1.length(); //lets say the substring that we have to look for is nirbhay so len = 7

	int n = s2.length(); //and the string in which we are looking is nirbhaysingh so len = 12

	for (int i = 0; i < n - m;)
	{ // here n-m will be 5

		int j;
		for (j = 0; j < m; j++)
		{
			if (s2[i + j] != s1[j])
			{
				break;
			}
		}

		if (j == m)
		{
			return true;
		}
		if (j == 0)
		{
			i++;
		}
		else
		{
			i += j;
		}
	}
	return false;
}

int main()
{

	cout << substring("in", "nirbhaysingh");
}