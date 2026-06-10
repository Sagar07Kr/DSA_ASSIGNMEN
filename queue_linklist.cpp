#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node * next;
	node(int x){
		data=x;
		next=NULL;
	}
};

class Queue{
	node * Rare;
	node * Front;
	int size;
	

public:

	Queue(){
		Rare=NULL;
		Front=NULL;
		size=0;
	}
	
	void push(int x){
		if(Front==NULL){
			node * temp=new node(x);
		    Rare=temp;
		    Front=temp;
		}
		else{
			node * temp=new node(x);
			Rare->next=temp;
		    Rare=temp;
		}
		size++;
	}

	void pop(){
		if(Front==NULL){
			cout<<"Queue underflow"<<endl;
			return ;
		}
		Front=Front->next;
		size--;
	}
    
    int front(){
    	if(Front==NULL){
    		cout<<"Queue underflow : ";
    		return -1;
    	}
    	return Front->data;

    }

    int Size(){
    	return size;
    }

    bool empty(){
    	return Front==NULL;
    }

    void print(){
    	node * temp=Front;
        cout<<"Queue is --"<<endl;
    	while(temp!=NULL){
    		cout<<temp->data<<"-->";
    		temp=temp->next;
    	}
    	cout<<"NULL"<<endl;
    }
};
int main(){
	Queue q;
	q.push(10);
	cout<<q.front()<<endl;
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.print();//10 20 30 40 50
	cout<<"size: "<<q.Size()<<endl;
	q.pop();q.pop();
    q.print();//30 40 50
    cout<<q.Size()<<endl;
    cout<<"front element: "<<q.front()<<endl;
    cout<<"Empty: "<<q.empty()<<endl;
    q.pop();q.pop();
    q.print();//
    cout<<q.Size()<<endl;
    cout<<"front element: "<<q.front()<<endl;
    cout<<"Empty: "<<q.empty()<<endl;
    q.pop();
    q.print();//
    cout<<q.Size()<<endl;
    cout<<"front element: "<<q.front()<<endl;
    cout<<"Empty: "<<q.empty()<<endl;
}
