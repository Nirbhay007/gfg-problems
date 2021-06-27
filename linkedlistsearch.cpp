#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int n)
	{
		data = n;
		next = NULL;
	}
};

int search(Node *head, int k)
{
	int pos = 1;
	if (head == NULL)
	{
		return -1;
	}
	Node *curr = head;
	while (curr != NULL)
	{
		if (curr->data == k)
		{
			return pos;
		}
		else
		{
			pos++;
			curr = curr->next;
		}
	}
	return -1;
}
int recsearch(Node *head, int k)
{

	if (head == NULL)
	{
		return -1;
	}
	if (head->data == k)
	{
		return 1;
	}

	int res = recsearch(head->next, k);
	if (res == -1)
	{
		return -1;
	}
	else
	{
		return 1 + res;
	}
}
int main()
{
	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);

	head->next = temp1;
	temp1->next = temp2;
	cout << recsearch(head, 20);
}