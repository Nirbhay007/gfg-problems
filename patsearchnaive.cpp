#include <bits/stdc++.h>
using namespace std;

void pattersearch(string s1, string patt)
{

	int m = s1.length();
	int n = patt.length();

	for (int i = 0; i <= m - n;)
	{
		int j;
		for (j = 0; j < n; j++)
		{
			if (patt[j] != s1[i + j])
			{
				break;
			}
		}
		if (j == n)
		{
			cout << i << endl;
		}
		if (j == 0)
		{
			i++;
		}
		else
		{
			i = i + j;
		}
	}
}

int main()
{

	pattersearch("nirbhay", "bh");
}