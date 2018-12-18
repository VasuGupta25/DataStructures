// Reverse_llist_IterativeMethod
// "prvs" at first points to NULL
// "current" points to the node whose link we reverse
// "fwd" points to the node that is next to "current"

#include<iostream>
using namespace std;
 
 struct Node
 {
 int data;
 Node* next;
 };
 	Node* head=NULL;
 	
 void insert(int x)     //Inserts element at beginning of list
 {
 	Node*temp=new Node();
 	temp->data=x;
 	temp->next=head;
 	head=temp;
 	
 }
 void Reverse()                  //Reverse the linked list
 {
 	Node *prev,*current,*fwd;
 	prev=NULL;
 	current=head;
 	while(current!=NULL)
 	{
 		fwd=current->next;
 		current->next=prev;
 		prev=current;
 		current=fwd;
	 }
	 head=prev;
 }
 
 void display()               //displays the elements in the list
 {
 	Node *ptr;
 	ptr=head;
 	while(ptr!=NULL){
	cout<<ptr->data<<" ";
 	ptr=ptr->next;}
 }
 
int main()
{
	int n,p,ele;
	cout<<"enter the no. of elements you want to insert ";
	cin>>p;
	cout<<endl;
	

	for(int k=0;k<p;k++)
	{
		cout<<"enter the element ";
		cin>>ele;
		insert(ele);
		cout<<"the link list is ";
		display();
		cout<<endl;
	
    }	
    Reverse();
	cout<<endl<<"the link list is ";
	display();
	return 0;
}
