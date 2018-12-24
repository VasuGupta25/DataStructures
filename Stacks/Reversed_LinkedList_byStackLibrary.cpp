// #Lect 17
// Inserted elements in LinkedList (insert() function)
// Reversed the LinkedList using Stack Library

#include <iostream>
#include<stack>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node *head=NULL;

void insert(int x)    // Inserting elements from head side of list
{
	Node *temp= new Node();
	temp->data=x;
	temp->next=head;
	head=temp;
}

void Reverse()         //Reversing the linked list using Stack library
{
	Node*temp=head;
	stack<Node*>S;
	if(head==NULL) {return;}
	while(temp!=NULL)
	{
		S.push(temp);
		temp=temp->next;
	}
	temp=S.top();
	head=temp;
	S.pop();
	while(!S.empty())
	{
		temp->next=S.top();
		S.pop();
		temp=temp->next;
	}
	temp->next=NULL;
}

void display()          //display the whole Linked List
{
	Node *temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}

int main()
{
	int n,ele;
	cout<<"Enter the no. of elements to be added in Linked List ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ele;
		insert(ele);
	}
	cout<<endl<<"The linked list is"<<endl;
	display();  
	Reverse();
	cout<<endl<<"The Reversed linked list using Stack library"<<endl;
	display();
	return 0;
}
