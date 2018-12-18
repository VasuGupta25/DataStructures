// Used Recursion to reverse the linked list


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
 void ReversebyRecursion(Node *p)        //Reverse the linked list by using Recursion  //Very Important concept
 {
 	if(p->next==NULL){
 		head=p;
 		return;
	 }
	 ReversebyRecursion(p->next);
	 Node *q=p->next;
	 q->next=p;
	 p->next=NULL;
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
    ReversebyRecursion(head);
	cout<<endl<<"the link list is ";
	display();
	return 0;
}
