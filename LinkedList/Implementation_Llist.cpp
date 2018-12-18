// Inserts new node at beginning
// Delete specific node at n-position

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
 void Delete(int n)      //deletes element at specified position
 {
 	Node* temp3=head;
 	if(n==1)
 	{
 		head=temp3->next;
 		delete temp3;
 		return;
	}
	Node* temp4;
	for(int i=0;i<n-2;i++)
	{
		temp3=temp3->next;
	}
	temp4=temp3->next;
	temp3->next=temp4->next;
	delete temp4;
	
 		
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
	cout<<endl<<"enter the position to delete ";
	cin>>n;
	Delete(n);
	cout<<"the link list is ";
	display();
	return 0;
}
