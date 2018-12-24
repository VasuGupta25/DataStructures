/* This program adds new node from head side and deletes the node from position mentioned.
   Also prints the list in normal and reverse order */
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *prev;
	Node *next;
};
Node *head=NULL;
void insert(int x)        // inserts node from head
{
	Node*temp=new Node();
	temp->data=x;
	temp->prev=NULL;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		return;
	}
	head->prev=temp;
	temp->next=head;
	head=temp;
}
void display()              // displays doublyllist in normal order
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void displayReverse(){        // displays doublyllist in reverse order
	 Node*temp=head;
	 if(temp==NULL)
	 {
	 	return;
	 }
	 while(temp->next!=NULL)
	 {
	 	temp=temp->next;
	 }
	 while(temp!=NULL)
	 {
	 	cout<<temp->data<<" ";
	 	temp=temp->prev;
	 }
}
void remove(int pos)       // removes node from specified location
{
	Node*temp1=head;
	Node*temp2;
	if(temp1==NULL)
	{return;}
	for(int i=0;i<pos-2;i++)
	{
		temp1=temp1->next;
	}
	temp2=temp1->next;
	temp1->next=temp2->next;
	if(temp1->next==NULL)     //As there is no node after the node we want to delete..so there is no logic of setting "prev" pointer for the node after 'the node to be deleted'
	{
		delete temp2;
		return;
	}
	temp2->next->prev=temp1;
	delete temp2;
}
int main()
{
	int n,x,pos;
	cout<<"Enter the no. of elements to insert ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>x;
	insert(x);
	}
	cout<<"Doubly LList in Normal Order "<<endl;
	display();
	cout<<endl;
	cout<<"Doubly LList in Reverse Order "<<endl;
	displayReverse();
	cout<<endl<<"Enter the node position to delete "<<endl;
	cin>>pos;
	remove(pos);
	display();
	return 0;
}
