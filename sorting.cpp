#include <bits/stdc++.h>

using namespace std;

int main()
{
	//the inbuilit sorting is the combination of different sorting and known as hybrid sorting
	//INTRO SORT OR INTROSPECTIVE SORT IS THE COMBINATION OF DIFFERENT SORTING ALGORITHM
	//consists of heap sort , insertionsort(for smaller array) and merge_sort or quicksort;
	//sorting with vectors and array

	//STABLE SORT ->   BUBBLE SORT, MERGE SORT , INSERTION SORT , BINARY TREE SORT

	//UNSTABLE SORT->  SELECTION SORT, HEAP SORT, QUICK SORT
	vector<int> v{44, 2, 4, 99, 3, 22, 33};

	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}