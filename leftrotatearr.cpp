#include <bits/stdc++.h>

using namespace std;

void rotateleftbyone(int arr[], int n)
{
	int temp = arr[0];

	for (int i = 1; i < n; i++)
	{
		arr[i - 1] = arr[i];
	}
	arr[n - 1] = temp;
}

int main()
{
	int arr[] = {10, 8, 0, 0, 12, 0};
	rotateleftbyone(arr, 6);
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}
}