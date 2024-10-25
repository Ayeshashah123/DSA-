#include<iostream>
using namespace std;
class node{
	public:
int data;
node *next;
 node(){
 	data=0;
 	next=NULL;
 }
};
class queue{
	public:
	node* front;
	node* rear;
queue()
{
	front =NULL;
	rear =NULL;
}
void enqueue(int value){
	node* q1=new node;
	q1->data=value;
	q1->next=NULL;
	if(front==NULL && rear==NULL)
	{
		front=rear=q1;
		
		return;
	}
	rear->next=q1;
	rear=q1;
}
void dequeu(){
	node* temp=front;
	if(front==NULL){
		cout<<"empty!!"<<endl;
		
	}
	else{
		front=front->next;
		delete temp;
	}
}
void display(){
	node* temp;
	temp=front;
	cout<<"queue:"<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
};
int main(){
	queue q;
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);

	q.display();
		q.dequeu();
		
	q.display();
}
