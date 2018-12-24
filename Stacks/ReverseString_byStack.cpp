// #Lect 17
// Reversing String using Stack Library

#include <bits/stdc++.h> 
#include<stack>
using namespace std;
stack<char>S; 
void print(char A[])                    //prints all elements of stack
{
	int n= sizeof(A);
	cout<< "String is ";
	for(int i=0;i<n;i++)
	{
		cout<<A[i];
	}
	cout<<endl;
}
void Reverse(char A[],int n)           //Reverse all elements of stack
{
	for(int i=0;i<n;i++) {S.push(A[i]);}
	for(int i=0;i<n;i++) 
	{
		A[i]=S.top();
		S.pop();
	}	
}

int main()
{
	string st;
	cout<<"Enter the string to be reversed using stack "<<endl;
	cin>>st;
	int n=st.length();
	char A[n];
	strcpy(A,st.c_str());    // stringName.c_str()  =>  c_str() is function which converts the string in characters OR  It returns a pointer to an
	                         // array that contains a null-terminated sequence of characters (i.e., a C-string) representing the current value of the string object.
	                         // we could also have used gets() function..but in cpp we used " strcpy(A,st.c_str()); "
    print(A);
    cout<<"The reversed string by stack is "<<endl;
    Reverse(A,n);
    print(A);
	return 0; 
}
