#include <bits/stdc++.h>

using namespace std;

void insert(int a[], int n, int x, int cap, int pos)
{

	if (n == cap)
	{
		return;
	}
	int idx = pos - 1;
	for (int i = n - 1; i >= idx; i--)
	{
		a[i + 1] = a[i];
	}
	a[idx] = x;
}

int main()
{
	int n = 6;
	int arr[n + 1] = {3, 4, 5, 7, 8, 9};
	insert(arr, 6, 6, 10, 3);
	for (int i = 0; i < n + 1; i++)
	{
		cout << arr[i] << " ";
	}
}