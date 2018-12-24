// #Lect 16
// Implementing Stck using Linked List
// push(),pop(),display()


#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};

Node *top=NULL;

void push(int x)
{
	Node *temp= new Node();
	temp->data=x;
	temp->next=top;
	top=temp;
}

void pop()
{
	Node* temp;
	if(top==NULL)
	{
		return;
	}
	temp=top;
	top=top->next;
	delete temp;
}

void display()
{
	Node *temp;
	temp=top;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
int main()
{
	push(2);   //pushing elements to stack
	push(5);
	push(9);
	pop();     // pop the top element from stack
	display();  //display the whole stack
	return 0;
}
