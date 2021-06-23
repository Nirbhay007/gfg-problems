#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[], int n)
{ //bubble sort optimized version

	bool flag = false;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				flag = true;
			}
		}
		if (flag == false)
		{
			break;
		}
	}
}

int main()
{

	int arr[] = {1, 2, 3, 4, 5, 7, 6};
	bubble_sort(arr, 7);
	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << " ";
	}
}