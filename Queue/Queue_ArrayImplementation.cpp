
/* Queue - Array implementation in C++*/
// In queue an element is always enqueued from rear and dequeued from the front
//# lect 23

#include<iostream>
using namespace std;
# define MAX 5 
class Queue{
 private:
	int A[MAX];
	int front,rear;
 public:
		Queue()                 // setting rear and front
		{
			rear=front=-1;
		}
		
		bool IsEmpty()        // checking that queue is empty or not
		{
			return (front==-1 && rear==-1) ? true : false;
		}
		
		bool IsFull()            // checking that queue is full or not
		{
			return (rear==MAX-1) ? true : false;
		}
		void Enqueue(int x)      // enqueuing element in queue
		{
			cout<<"Enqueuing "<<x<<endl;
	        if(IsFull()){
		       cout<<" Error queue is full ";
	        }
	        if (IsEmpty())
	        {
		       rear=front=0;
	        }
	        else
	        {
		        rear=rear+1;
	        }
	        A[rear]=x;
		}

	    void Dequeue()          // dequeuing element from queue
	    {
	        cout<<"Dequeuing "<<endl;
	        if(IsEmpty()) {return;}
	        if(rear==front)
	        {
		       rear=front=-1;
	        }
	        else
	        {
		       front=front+1;
	        }       
	    }
	   
	    void display()           // printing elements of queue
	    {
	       for(int i=front;i<rear+1;i++)
	       {
		      cout<<A[i]<<" ";
	       }
	       cout<<endl<<endl;
	    }
};
int main()
{
	Queue Q;
	Q.Enqueue(5);  	Q.display();
	Q.Enqueue(7);  	Q.display();
	Q.Dequeue();  	Q.display();
	Q.Enqueue(9);  	Q.display();
	Q.Enqueue(8);  	Q.display();
    Q.Dequeue();  	Q.display();
	Q.Enqueue(2);	Q.display();	
}
