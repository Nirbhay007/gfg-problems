#include <bits/stdc++.h>

using namespace std;

int squareroot(int n)
{

	int low = 0;
	int high = n;
	int ans = -1;

	while (low <= high)
	{
		int mid = (low + high) / 2;
		int sqt = mid * mid;
		if (sqt == n)
		{
			return mid;
		}
		else if (n > sqt)
		{                                   //h->15 l->0 then mid =7, so sqt = 49>n so high = mid -1 
		//h = 6 l=0 therefor mid = 3 hence 3*3=9 not equal but low = 4 so it crossed high hence we will just keep the last stored ans as our final answer.
		
			low = mid + 1;
			ans = mid;
		}
		else
		{
			high = mid - 1;
		}
	}
	return ans;
}

int main()
{
	cout << squareroot(15);
}