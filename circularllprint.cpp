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
void printcircularll(Node *head)
{
	if (head == NULL)
	{
		return;
	}
	cout << head->data << " ";

	for (Node *p = head->next; p != NULL; p = p->next)
	{
		cout << p->data << " ";
	}
}
//now i am gonna print the circular linked list with the help of do while loop

void printcirculardo(Node *head)
{

	if (head == NULL)
	{
		return;
	}
	Node *p = head;
	do
	{
		cout << p->data << " ";
		p = p->next;
	} while (p != head);
}
//naive solution to insert at the beginning of the circular linked list.
Node *insertatbegin(Node *head, int k)
{
	Node *temp = new Node(k);

	if (head == NULL)
	{
		temp->next = temp;
		return temp;
	}
	Node *curr = head;
	while (curr->next != head)
	{
		curr = curr->next;
	}
	curr->next = temp;
	temp->next = head;
	return temp;
}

//now since we are using the time complexity of big o of N ,we are going to write an insert function
//that will do the insertion in the constant time with swapping the first two values of a circular linked list

Node *insertoptimized(Node *head, int k)
{

	Node *temp = new Node(k);

	if (head == NULL)
	{
		temp->next = temp;
		return temp;
	}
	temp->next = head->next;
	head->next = temp;
	int p = temp->data;
	temp->data = head->data;
	head->data = p;
	return head;
}

//naive deletion of element from a circular linked list O(n)
Node *insertatendcircular(Node *head, int k)
{

	Node *temp = new Node(k);
	if (head == NULL)
	{

		temp->next = temp;
		return temp;
	}
	Node *curr = head;

	while (curr->next != head)
	{
		curr = curr->next;
	}
	curr->next = temp;
	temp->next = head;
	return head;
}
//optimized solution to insert a node at the end of circular linked list with the help of swapping the first two values

Node *optimizedinseratend(Node *head, int k)
{

	Node *temp = new Node(k);

	if (head == NULL)
	{
		temp->next = temp;
		return temp;
	}
	temp->next = head->next;
	head->next = temp;
	int p = temp->data;

	temp->data = head->data;
	head->data = p;
	return temp;
}
Node *deletehead(Node *head)
{

	if (head == NULL)
	{
		return NULL;
	}
	if (head->next == head)
	{
		delete head;
		return NULL;
	}

	Node *curr = head;
	while (curr->next != head)
	{
		curr = curr->next;
	}
	curr->next = head->next;
	delete head;
	return curr->next;
}

//optimized delete head
Node *deleteheadoptimized(Node *head)
{
	if (head == NULL)
	{
		return NULL;
	}
	if (head->next == head)
	{
		delete head;
		return NULL;
	}
	head->data = head->next->data;
	Node *temp = head->next;
	head->next = head->next->next;
	delete temp;
	return head;
}
//delete kth node from the start of circular linked list;
Node *deletekth(Node *head, int k)
{
	if (head == NULL)
		return head;
	if (k == 1)
		return deletehead(head);
	Node *curr = head;
	for (int i = 0; i < k - 2; i++)
		curr = curr->next;
	Node *temp = curr->next;
	curr->next = curr->next->next;
	delete temp;
	return head;
}

int main()
{

	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);
	// Node *temp3 = new Node(40);

	head->next = temp1;
	temp1->next = temp2;
	temp2->next = head;
	// temp2->next = temp3;
	printcirculardo(head);
	cout << endl;
	head = insertoptimized(head, 50);
	head = insertoptimized(head, 70);
	head = insertatendcircular(head, 90);
	head = optimizedinseratend(head, 100);
	// head = deleteheadoptimized(head);
	// head = deletehead(head);
	head = deletekth(head, 7);
	printcirculardo(head);
}
