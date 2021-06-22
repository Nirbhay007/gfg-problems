#include <bits/stdc++.h>

using namespace std;

int binarysearch_iterative(int arr[], int n, int k)
{
	//if the array is [3,4,8,9,24,29] and k = 24 then low =0 high =5 mid =2 so if k>mid then low = mid
	int low = 0;
	int high = n - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (k == arr[mid])
		{
			return mid;
			break;
		}
		else if (k > arr[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}
int binarysearch_rec(int arr[], int low, int high, int k)
{

	int mid = (low + high) / 2;
	if (arr[mid] == k)
	{
		return mid;
	}
	else if (arr[mid] < k)
	{
		return binarysearch_rec(arr, mid + 1, high, k);
	}
	else if (arr[mid] > k)
	{
		return binarysearch_rec(arr, low, mid - 1, k);
	}
	else
	{
		return -1;
	}
}

int main()
{
	int arr[] = {3, 4, 9, 89, 700, 1999};
	cout << binarysearch_rec(arr, 0, 5, 1999);
}