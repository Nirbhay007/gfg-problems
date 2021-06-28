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

void printll(Node *head)
{

	Node *curr = head;

	while (curr != NULL)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
}

Node *reverse(Node *head)
{

	Node *prev = NULL;
	Node *curr = head;

	Node *next;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	} //if we have the linked list as 1->4->8->10->13 => prev = NULL in the start , then curr = head
	//next becomes 4 now we change curr->next to prev; prev = curr; and curr = next;
	return prev;
}

Node *recreverse(Node *curr, Node *prev)
{
	if (curr == NULL)
	{
		return prev;
	}

	Node *next = curr->next;
	curr->next = prev;
	return recreverse(next, curr);
}

int main()
{

	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);
	// Node *temp3 = new Node(40);

	head->next = temp1;
	temp1->next = temp2;
	// temp2->next = temp3;
	printll(head);
	cout << endl;
	head = recreverse(head, NULL);
	printll(head);
}