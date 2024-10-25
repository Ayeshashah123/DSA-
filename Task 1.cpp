#include<iostream>
using namespace std; 
class queue{
	public:
	int arr[10];
	int front;
	int rear;
queue()
{
	front =0;
	rear=0;
}


   void enqueue(int value)
   {
   	   
   	arr[rear]=value;
   	rear++;
     }
void dequeue(){
if(isEmpty())
{
	cout<<"empty!!!"<<endl;
}
else
{

	front++;

}
}
bool isEmpty(){
	if(front==rear)
	{
		return true;
	}
	else {
		return false;
	}
}
void display(){
	cout<<"Queue Elements:";
	for(int i=front;i<rear;i++){
		cout<<arr[i];
	}
}
};

int main(){
	queue q1;
	q1.enqueue(5);
	q1.enqueue(6);
	q1.enqueue(7);
	q1.dequeue();
	q1.display();q1.enqueue(3);q1.display();
q1.dequeue();
q1.display();	
}