#include <bits/stdc++.h>

using namespace std;

string sub(string s, string curr = "", int idx = 0)
{
	int n = s.length();
	if (idx == n)
	{

		break;
	}
	cout << curr << " ";

	sub(s, curr, idx + 1);
	sub(s, curr + s[idx], idx + 1);
	return 0;
}

int main()
{
	cout << sub("ABCD");
	return 0;
}