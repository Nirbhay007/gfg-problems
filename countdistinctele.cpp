#include <bits/stdc++.h>

using namespace std;
int count_distinct(int arr[], int n)
{
	int count = 0;
	unordered_set<int> s;
	for (int i = 0; i < n; i++)
	{
		s.insert(arr[i]);
	}

	for (auto x : s)
	{
		count += 1;
	}
	return count;
}
int count_distinct2(int arr[], int n)
{

	unordered_set<int> s(arr, arr + n);
	return s.size();
}

int main()
{
	int arr[] = {4, 5, 33, 22, 22, 11, 11, 1, 1, 12, 5};
	cout << count_distinct2(arr, 11);
}