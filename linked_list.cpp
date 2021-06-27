#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	Node *next; //we have self-referential structure since every nodes next is of same datatype as of previous

	Node(int n) //thats behaving as a constructor

	{
		data = n;
		next = NULL;
	}
};

int main()
{
	Node *head = new Node(12);
	Node *temp1 = new Node(13);
	Node *temp2 = new Node(14);
	head->next = temp1;
	temp1->next = temp2;
	cout << head->data << " " << head->next->data << endl;
}