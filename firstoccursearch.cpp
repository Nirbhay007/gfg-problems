#include <bits/stdc++.h>
using namespace std;

int firstoccur(int arr[], int n, int k)
{

	int low = 0;
	int high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (arr[mid] < k)
		{
			low = mid + 1;
		}
		else if (arr[mid] > k)
		{
			high = mid - 1;
		}

		else
		{
			if (mid == n - 1 || arr[mid] != arr[mid + 1])
			{
				return mid;
			}
			else
			{
				low = mid + 1;
			}
		}
	}
	return -1;
}

int main()
{
	int arr[] = {4, 9, 9, 9, 9, 9, 32, 78, 89, 200};
	cout << firstoccur(arr, 10, 9);
}