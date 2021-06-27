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

void printList(Node *head)
{
	Node *curr = head;
	while (curr != NULL)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
}
//recursive approach to solve the given problem of displaying or traversing throught the linkedlist

void recursiveTraversal(Node *head)
{
	if (head == NULL)
	{
		return;
	}
	cout << head->data << " ";
	recursiveTraversal(head->next);
}
int main()
{
	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);

	head->next = temp1;
	temp1->next = temp2;
	recursiveTraversal(head);
}