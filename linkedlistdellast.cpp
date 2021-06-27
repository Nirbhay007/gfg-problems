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

Node *dellast(Node *head)
{
	if (head == NULL)
	{
		delete head;
		return NULL;
	}
	if (head->next == NULL)
	{
		return NULL;
	}
	Node *curr = head;
	while (curr->next->next != NULL)
	{
		curr = curr->next;
	}
	delete curr->next;
	curr->next = NULL;
	return head;
}
void printList(Node *head)
{

	Node *curr = head;
	while (curr != NULL)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
}

int main()
{

	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);

	head->next = temp1;
	temp1->next = temp2;
	printList(head);
	dellast(head);
	printList(head);
}