#include <bits/stdc++.h>

using namespace std;

int leftmostrep(string s)
{
	// 	int l = s.length();
	// 	int count[256] = {0};

	// 	for (int i = 0; i < l; i++)
	// 	{
	// 		count[s[i]]++;
	// 		if (count[s[i]] > 1)
	// 		{
	// 			return;
	// 		}
	// 	}

	// 	return 0;
}
//efficient solution for the above apporoach so that we could find the chars in a single loop
int lefmostrep2(string s)
{
	int l = s.length() - 1;
	int res = -1;
	bool visited[256] = {-1};
	for (int i = l; i >= 0; i--)
	{
		if (visited[s[i]])
		{
			res = i;
		}
		else
		{
			visited[s[i]] = true;
		}
	}
	return res;
}

int main()
{

	cout << lefmostrep2("abvcdeeb");
}