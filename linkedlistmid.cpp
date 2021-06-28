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

void printNodes(Node *head)
{

	Node *curr = head;
	while (curr != NULL)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
}
int midoflinkedlist(Node *head)
{

	Node *slow = head;
	Node *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;

		fast = fast->next->next;
	}
	return slow->data;
}

int midoflinkedll(Node *head)
{

	Node *curr = head;
	int len = 0;
	while (curr != NULL)
	{
		len++;
		curr = curr->next;
	}

	Node *curr2 = head;
	for (int i = 0; i < len / 2; i++)
	{
		curr2 = curr2->next;
	}
	return curr2->data;
}

int nthNodefromend(Node *head, int n)
{

	int length = 0;
	Node *curr = head;
	while (curr != NULL)
	{
		length++;
		curr = curr->next;
	}
	cout << length << endl;
	if (length < n)
	{
		return -1;
	}
	Node *curr2 = head;
	for (int i = 1; i < (length - n + 1); i++)
	{
		curr2 = curr2->next;
	}
	return curr2->data;
}

//i am gonna write a function here to reverse a linked list with the help of two for loops

// such that i will be traversing through one of the loop keeping every element in a vector
// and then taking out element from back of the vector and putting it from first element in linked list

Node *reversll(Node *head)
{

	vector<int> v;
	if (head == NULL or head->next == NULL)
	{
		return head;
	}
	Node *curr = head;
	while (curr != NULL)
	{
		v.push_back(curr->data);
		curr = curr->next;
	}
	Node *curr1 = head;
	while (curr1 != NULL)
	{
		curr1->data = v.back();
		v.pop_back();
		curr1 = curr1->next;
	}
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
	// temp2->next = temp3;
	printNodes(head);
	cout << endl;
	cout << midoflinkedll(head);
	cout << endl;
	cout << nthNodefromend(head, 2);
	cout << endl;
	head = reversll(head);
	printNodes(head);
}