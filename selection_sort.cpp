#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{

	for (int i = 0; i < n - 1; i++)
	{
		int min = i;

		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(arr[i], arr[min]);
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	selection_sort(arr, 7);
	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << " ";
	}
}