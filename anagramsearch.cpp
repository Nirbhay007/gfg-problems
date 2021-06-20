#include <bits/stdc++.h>
using namespace std;

bool anagram(string text, string pat, int i)
{

	int count[256] = {0};
	for (int j = 0; j < pat.length(); j++)
	{
		count[pat[j]]++;
		count[text[i + j]]--;
	}

	for (int i = 0; i < 256; i++)
	{
		if (count[i] != 0)
		{
			return false;
		}
	}
	return true;
}

bool ispresent(string s1, string pat)
{
	int m = s1.length();
	int n = pat.length();
	for (int i = 0; i <= m - n; i++)
	{
		if (anagram(s1, pat, i))
		{
			return true;
		}
	}
	return false;
}
int main()
{
	cout << ispresent("nirbhay", "iha");
}