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

Node *insertinBegin(Node *head, int k)
{

	Node *temp = new Node(k);
	temp->next = head;
	return temp;
}
Node *inseratEnd(Node *head, int k)
{
	Node *temp = new Node(k);
	if (head == NULL)
	{
		return temp;
	}
	Node *curr = head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = temp;
	return head;
}

Node *delhead(Node *head)
{
	if (head == NULL)
	{
		return head;
	}

	head = head->next;
	return head;
}

int main()
{
	Node *head = NULL;
	head = inseratEnd(head, 10);
	head = inseratEnd(head, 20);
	head = inseratEnd(head, 30);
	head = delhead(head);
	Node *curr = head;
	while (curr != NULL)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
}