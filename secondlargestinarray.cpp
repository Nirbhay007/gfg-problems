#include <bits/stdc++.h>

int largest(int arr[], int n)
{

	int max = 0;

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[max])
		{

			max = i;
		}
	}
	return max;
}

int secondlargest(int arr[], int n)
{
	int first = 0;
	int second = -1;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[first])
		{
			second = arr[first];
			first = i;
		}
		else if (arr[first] != arr[i])
		{
			if (second == -1 || arr[second] < arr[i])
			{
				second = arr[i];
			}
		}
	}
	return second;
}

int removedup(int arr[], int n)
{
	int temp[n];

	temp[0] = arr[0];
	int res = 1;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] != arr[res])
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

using namespace std;
int main()
{

	int n = 6;
	int arr[n + 1] = {9, 9, 9, 9, 9, 7};
	cout << secondlargest(arr, 6);
}