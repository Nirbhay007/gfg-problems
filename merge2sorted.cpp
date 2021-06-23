#include <bits/stdc++.h>
using namespace std;

void merge2sorted(int arr1[], int arr2[], int m, int n)
{

	int i = 0;
	int j = 0;
	while (i < m && j < n)
	{
		if (arr1[i] <= arr2[j])
		{
			cout << arr1[i] << " ";
			i++;
		}
		else
		{
			cout << arr2[j] << " ";
			j++;
		}
	}
	while (i < m)
	{
		cout << arr1[i] << " ";
		i++;
	}
	while (j < n)
	{
		cout << arr2[j] << " ";
		j++;
	}
}

int main()
{
	int arr1[] = {3, 4, 90, 102, 339};
	int arr2[] = {1, 2, 3, 4, 89};
	merge2sorted(arr1, arr2, 5, 5);
}