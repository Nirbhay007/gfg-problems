#include <bits/stdc++.h>

using namespace std;

bool anagram(string s1, string s2)
{
	int count[256] = {0};

	int l1 = s1.length();
	int l2 = s2.length();
	if (l1 != l2)
	{
		return false;
	}
	for (int i = 0; i < l1; i++)
	{
		count[s1[i]]++;
	}
	for (int i = 0; i < l2; i++)
	{
		count[s2[i]]--;
	}

	for (auto x : count)
	{
		if (x != 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{

	cout << anagram("liassten", "ssbilent");
}