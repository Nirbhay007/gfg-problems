#include <bits/stdc++.h>
using namespace std;

int nonrepleft(string s)
{

	int count[256] = {0};

	for (int i = 0; i < s.length() - 1; i++)
	{
		count[s[i]]++;
	}

	for (int i = 0; i < s.length() - 1; i++)
	{
		if (count[s[i]] == 1)
		{
			return i;
		}
	}
	return -1;
}

//one traversal work
int leftmostnonrep2(string s)
{

	int visited[256] = {-1};
	int res = INT_MAX;
	for (int i = 0; i < s.length(); i++)
	{
		if (visited[s[i]] == -1)
			visited[s[i]] = i;
		else
			visited[s[i]] = -2;
	}
	for (int i = 0; i < 256; i++)
	{
		if (visited[i] >= 0)
			res = min(res, visited[i]);
	}
	return res;
}

int main()
{

	cout << leftmostnonrep2("geeksforgeeks");
}