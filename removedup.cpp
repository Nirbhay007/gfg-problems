#include <bits/stdc++.h>
using namespace std;

int removedup(int arr[], int n)
{
	int temp[n];

	temp[0] = arr[0];
	int res = 1;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] != arr[res - 1])
		{
			temp[res] = arr[i];
			res++;
		}
	}

	for (int i = 0; i < res; i++)
	{
		arr[i] = temp[i];
	}
	return res;
}

int removedup2(int arr[], int n)
{
	int res = 1;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] != arr[res - 1])
		{
			arr[res] = arr[i];
			res++;
		}
	}
	return res;
}

int main()
{

	int arr[] = {1, 2, 3, 4, 8, 8, 9, 9};
	int new_n = removedup(arr, 8);
	cout << new_n << endl;
	for (int i = 0; i < new_n; i++)
	{
		cout << arr[i] << " ";
	}
}