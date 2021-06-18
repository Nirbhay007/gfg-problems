#include <bits/stdc++.h>

using namespace std;

void freq(int arr[], int n)
{

	unordered_map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		if (m.count(arr[i]) == 0)
		{
			m[arr[i]] = 1;
		}
		else
		{
			m[arr[i]] += 1;
		}
	}
	for (auto x : m)
	{
		cout << x.first << " " << x.second << endl;
	}
}
void frea2(int arr[], int n)
{
	unordered_map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		m[arr[i]]++;
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << arr[i] << " = " << m[arr[i]] << endl;
	// 	m.erase(arr[i]);
	// }
	vector<pair<int, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << endl;
	}
}
int main()
{

	int arr[] = {12, 3, 4, 22, 33, 22, 33, 12, 4, 4, 4};
	frea2(arr, 11);
}