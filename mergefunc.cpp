
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) //setting up auxilliary space
{

	int n1 = mid - low + 1;
	int n2 = (high - mid);

	int left[n1];
	int right[n2];

	for (int i = 0; i < n1; i++)
	{
		left[i] = arr[low + i];
	}
	for (int j = 0; j < n2; j++)
	{
		right[j] = arr[mid + 1 + j];
	}

	int i = 0, j = 0, k = low;
	while (i < n1 && j < n2)
	{
		if (left[i] <= right[j])
		{
			arr[k++] = left[i++];
		}
		else
		{
			arr[k++] = right[j++];
		}
	}
	while (i < n1)
	{
		arr[k++] = left[i++];
	}
	while (j < n2)
	{
		arr[k++] = right[j++];
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (r > l)
	{
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

int main()
{

	int a[] = {3, 89, 1, 23, 45, 890, 4, 76};

	mergeSort(a, 0, 7);
	for (auto x : a)
	{
		cout << x << " ";
	}
}