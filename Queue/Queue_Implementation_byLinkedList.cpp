// #lect 24
// Linked List implementation of Queue
#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node* rear=NULL;
Node*front=NULL;
bool IsEmpty()
{
	return (front==NULL && rear==NULL) ? true: false;
}
void Dequeue()
{
	cout<<"Dequeuing "<<endl;
	Node*temp=new Node();
	if(IsEmpty())
	{
		cout<<"Error: Queue is empty";
	}
	if(front==rear)
	{
		front=rear=NULL;
	}
	else
	{
		
		temp->next=NULL;
		temp=front;
		front=front->next;
	}
	delete (temp);
}


void Enqueue(int x)
{
	cout<<"Enqueuing "<<x<<endl;
	Node* temp=new Node();
	temp->next=NULL;
	temp->data=x;
	if(IsEmpty())
	{
		rear=front=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;	
	}
}
void display()
{
	Node *temp=new Node();
	temp=front;
	while(temp!=NULL)
	{
		cout<< temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl<<endl;
}
int main()
{
	Enqueue(7);       display();
	Enqueue(9);       display();
	Dequeue();        display();
	Enqueue(2);       display();
	Dequeue();        display();
	Enqueue(33);      display();
	Enqueue(1);       display();
	Dequeue();        display();
	Enqueue(8);       display();
	
}
