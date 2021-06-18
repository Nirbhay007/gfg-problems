#include <bits/stdc++.h>

using namespace std;

bool palindromecheck(string s)
{

	int low = 0;
	int high = s.length() - 1;
	while (low < high)
	{
		if (s[low] != s[high])
		{
			return false;
		}

		low++;
		high--;
	}
	return true;
}

int main()
{
	cout << palindromecheck("acbcba");
}