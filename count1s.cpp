#include <bits/stdc++.h>
using namespace std;

int countones(bool arr[], int n)
{

	int low = 0;
	int high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == 0)
		{
			high = mid - 1;
		}

		else if (arr[mid] > 1)
		{
			low = mid + 1;
		}
		else
		{
			if (mid == n - 1 || arr[mid + 1] != 1)
			{
				return mid + 1;
			}
			else //11111000 ->low=0  , h = 8 mid = 4 low =4,h=8
			{
				low = mid + 1;
			}
		}
	}
	return -1;
}
int arr[] = {1, 1, 1, 1, 1, 0, 0, 0, 0};

void func(&arr)
{
	cout << arr[0];
}

int main()
{
	int arr[] = {1, 1, 1, 1, 1, 0, 0, 0, 0};
	// cout << countones(arr, 8);
	cout << func(arr);
}