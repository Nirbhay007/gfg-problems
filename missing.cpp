// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
	string missingPanagram(string str)
	{

		//Your code here
		string missing = "";
		int count[26] = {0};

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] >= 65 && str[i] < 97)
			{
				count[str[i] - 'A']++;
			}
			else
			{
				count[str[i] - 'a']++;
			}
		}
		for (int i = 0; i < 26; i++)
		{
			if (count[i] == 0)
			{
				missing += ('a' + i);
			}
		}
		if (missing.length() == 0)
		{
			return "-1";
		}
		return missing;
	};

	// { Driver Code Starts.
	int main()
	{
		int t;
		cin >> t;
		while (t--)
		{
			string s;
			cin >> s;
			Solution obj;
			cout << obj.missingPanagram(s) << endl;
		}
		return 0;
	}
};
