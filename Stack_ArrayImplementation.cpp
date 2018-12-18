// Implemented Stack using Array
/* This implementation of Stck using array is in c++ and does not follow oops concept, as we have
   not kept push(),pop(),top() function inside a class. */
   

#include<iostream>
using namespace std;
# define MAX 50                 
int A[MAX];
int top=-1;
void push(int x)                // pushes in element into the stack
{
	if(top==MAX-1)
	{
		cout<<"Satck overflow";
		return;
	}
	A[++top]=x;
}
void pop()                       // pops out element from stack
{
	if(top==-1)
	{
		cout<<"Stck underflow";
		return;
	}
	top--;
}
int topEle()     /               /returns the element at top of stack
{
	return A[top];
}
void print()                    //prints all elements of stack
{
	cout<< "Stack is ";
	for(int i=0;i<=top;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	push(3);  print();
	push(7);  print();
	push(5);  print();
    int ele=topEle();
	cout<<ele<<endl;    
	push(9);  print();
	pop();    print();

	
}
