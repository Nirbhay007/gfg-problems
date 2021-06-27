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

Node *insertat(Node *head, int pos, int k)
{

	Node *temp = new Node(k);
	if (pos == 1)
	{
		temp->next = head;
		return temp;
	}

	Node *curr = head;
	int i = 1;
	while (i < (pos - 1) && (curr != NULL))
	{
		curr = curr->next;
		i++;
	}
	if (curr == NULL)
	{
		return head;
	}
	temp->next = curr->next;
	curr->next = temp;
	return head;
}
Node *sorted_insert(Node *head, int k)
{
	Node *temp = new Node(k);
	if (head == NULL)
	{
		return temp;
	}
	if (head->data > k)
	{
		temp->next = head;
		return temp;
	}
	Node *curr = head;

	while (curr->next->data < k && curr->next != NULL)
	{
		curr = curr->next;
	}

	temp->next = curr->next;
	curr->next = temp;
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
	// insertat(head, 2, 40);
	cout << sorted_insert(head, 50);
}