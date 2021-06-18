#include <bits/stdc++.h>

using namespace std;

//program to count each character in the order they come
void count(string s)
{
	int letter[26] = {0};
	for (int i = 0; i < s.length(); i++)
	{
		letter[s[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (letter[i] > 0)
		{
			cout << char(i + 'a') << " " << letter[i] << " ";
		}
	}
}

int main()
{

	count("geeksforgeeks");

	//using strcmp

	char str1[] = "aa";
	char str2[] = "abc";
	int res = strcmp(str1, str2);
	if (res == 0)
	{
		cout << "same" << endl;
	}
	else if (res > 0)
	{
		cout << "Greater" << endl;
	}
	else
	{
		cout << "smaller";
	}

	//using strcpy to copy strings after undeclared initialization of any string

	char str[13];
	strcpy(str, "nirbhaysingh");
	cout << str << endl;
	cout << strlen(str) << endl;

	string s1 = "abcd";
	string s2 = "xyz";
	if (s1 > s2)
	{
		cout << "Greater" << endl;
	}
	else if (s1 == s2)
	{
		cout << "equal" << endl;
	}
	else
	{
		cout << "smaller" << endl;
	}
	for (auto x : s1)
	{
		cout << x << endl;
	}
}