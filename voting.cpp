// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution
{
public:
	//Function to return the name of candidate that received maximum votes.
	vector<string> winner(string arr[], int n)
	{
		// Your code here
		// Return the string containing the name and an integer
		// representing the number of votes the winning candidate got
		unordered_map<string, int> m;
		for (int i = 0; i < n; i++)
		{
			m[arr[i]]++;
		}

		vector<pair<string, int>> max;
		max[0].first = arr[0];
		max[0].second = m[arr[0]];
		for (int i = 0; i < n; i++)
		{
			if (m[arr[i]] >= max[i].second)
			{
				max.push_back({arr[i], m[arr[i]]});
			}
		}
		sort(max.begin(), max.end());
		vector<string> v;
		v.push_back(max[0].first);
		return v;
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{

		int n;
		cin >> n;

		string arr[n];

		for (int i = 0; i < n; i++)
			cin >> arr[i];
		Solution obj;
		vector<string> result = obj.winner(arr, n);

		cout << result[0] << " " << result[1] << endl;
	}
	return 0;
}
// } Driver Code Ends