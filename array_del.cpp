#include <bits/stdc++.h>
using namespace std;

void del(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			break;
		}
	}
	if (i == n)
	{
		return;
	}
	for (int j = i; j < n - 1; j++)
	{
		arr[j] = arr[j + 1];
	}
}

int main()
{
	int n = 6;
	int arr[n + 1] = {3, 4, 5, 7, 8, 9};
	del(arr, 6, 5);
	for (int i = 0; i < n - 1; i++)
	{
		cout << arr[i] << " ";
	}
}