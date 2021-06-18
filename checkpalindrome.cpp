#include <bits/stdc++.h>
using namespace std;

bool checkpalindrome(string s, int start, int end)
{

	if (start >= end)
	{
		return true;
	}
	if (s[start] != s[end])
	{
		return false;
	}
	return checkpalindrome(s, start + 1, end - 1);
}

int main()
{
	cout << checkpalindrome("ablbabba", 0, 7);
}