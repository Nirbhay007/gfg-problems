#include <bits/stdc++.h>
using namespace std;

bool isCharacter(char c)
{

	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int prescedence(char c)
{
	if (c == '^')
	{
		return 3;
	}
	else if (c == '*' || c == '/')
	{
		return 2;
	}
	else if (c == '+' || c == '-')
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

string infixtopostfix(string s)
{

	string postfix;
	stack<char> st;

	for (int i = 0; i < s.length(); i++)
	{

		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			postfix += s[i];
		}
		else if (s[i] == '(')
		{
			st.push(s[i]);
		}
		else if (s[i] == ')')
		{
			while (st.top() != '(' && !st.empty())
			{
				char t = st.top();
				postfix += t;
				st.pop();
			}
			if (st.top() == '(')
			{
				st.pop();
			}
		}

		else if (isCharacter(s[i]))
		{

			if (st.empty())
			{
				st.push(s[i]);
			}

			else
			{
				if (prescedence(s[i]) > prescedence(st.top()))
				{
					st.push(s[i]);
				}
				else if (prescedence(s[i]) == prescedence(st.top()) && s[i] == '^')
				{
					st.push(s[i]);
				}
				else
				{
					while (prescedence(s[i]) <= prescedence(st.top()) && (!st.empty()))
					{
						char t = st.top();
						postfix += t;
						st.pop();
					}
					st.push(s[i]);
				}
			}
		}
	}

	while (st.empty() == false)
	{
		char c = st.top();
		postfix += c;
		st.pop();
	}
	return postfix;
}

int main()
{

	string infix;
	cin >> infix;

	string postfix = infixtopostfix(infix);

	cout << "The postfix of the given infix is " << postfix << endl;
}