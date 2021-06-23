#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
	//this is the optimized approach for insertion sort algorithm
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key)
		{ //4,5,9,1,3,6 ->j =0,key = 5
			//after 2nd pass-> 459136
			//after 3rd -> key =9 j=1 =>459136
			//after 4th ->key =1,j=2    4459
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 7, 6};
	insertion_sort(arr, 7);
	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << " ";
	}
}