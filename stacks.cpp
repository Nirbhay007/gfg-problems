#include <bits/stdc++.h>

using namespace std;




//using vector we can also get the functionality of stacks such that



struct Stack
{
	int *arr;
	int cap;
	int top;

	Stack(int n)
	{
		cap = n;
		arr = new int[n];
		top = -1;
	}

	void push(int n)
	{
		if (top == cap - 1)
		{
			cout << "STACK IS FULL" << endl;
		}
		else
		{
			top++;
			arr[top] = n;
		}
	}
	int pop()
	{
		if (top > -1)
		{
			int x = arr[top];
			top--;
			return x;
		}
		else
		{
			cout << "underflow" << endl;
			return -1;
		}
	}
	int peek()
	{
		if (top == -1)
		{
			return -1;
		}
		else
		{
			return arr[top];
		}
	}
	int size()
	{
		return top + 1;
	}
	bool isEmpty()
	{
		return top == -1;
	}
};

int main()
{

	Stack s(5);

	cout << s.peek();
	s.push(12);
	s.push(12);
	s.push(12);
	s.push(12);
	s.push(12);
	while (s.isEmpty() != true)
	{
		cout << s.pop() << endl;
		}
}