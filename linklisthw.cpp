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
class Linklist{
public:
	node * head;
	Linklist(){
		head=NULL;
	}


void insertatFront(int x){
		if(head==NULL){
			node * temp=new node(x);
			head=temp;
		}
		else{
			node * temp=new node(x);
			temp->next=head;
			head=temp;
		}
}


void insertatEnd(int x){
	if(head==NULL){
			node * temp=new node(x);
			head=temp;
	}
	else{
		node * temp=head;
		while(temp->next!=NULL)temp=temp->next;
		node * temp2=new node(x);
		temp->next=temp2;
	}
}


void deleteatFront(){
	if(head!=NULL)head=head->next;
}


void deleteatEnd(){
	node * temp=head;
	while(temp->next->next!=NULL)temp=temp->next;
	temp->next=NULL;
}


int sizeofLL(){
	int count=0;
	node * temp=head;
	while(temp!=NULL)temp=temp->next,count++;
	return count;
}


void insertatPos(int pos,int data){
     if(pos>sizeofLL())insertatEnd(data);
     else if(pos<=1)insertatFront(data);
     else{
     	node * temp=head;int n=1;
     	while(n!=pos-1)temp=temp->next,n++;
     	node * temp1=new node(data);
     	temp1->next=temp->next;
     	temp->next=temp1;
     }
}

void deleteatPos(int pos){
	if(pos>=sizeofLL())deleteatEnd();
	else if(pos<=1)deleteatFront();
	else{
		node * temp=head;int n=1;
     	while(n!=pos-1)temp=temp->next,n++;
     	node * temp1=temp->next->next;
     	temp->next=temp1;
	}
}

void reverse(){
	node *prev=NULL;
	node * curr=head;
    while(curr!=NULL){
      node * nextt=curr->next;
      curr->next=prev;
      prev=curr;
      curr=nextt;
    }
    head=prev;
}

bool Find(int x){
	node * temp=head;
	while(temp!=NULL){
		if(temp->data==x)return true;
		temp=temp->next;
	}
	return false;

}


void printLL(){
	node * temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}	

};
int main(){
	Linklist ll;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		ll.insertatFront(x);
	}
	ll.printLL();
	// ll.deleteatEnd();
	// ll.printLL();
	// ll.deletatFront();
	// ll.printLL();
	// ll.insertatPos(3,10);
	// ll.printLL();
	// ll.deleteatPos(5);
	// ll.printLL();
    ll.reverse();
    ll.printLL();
    cout<<ll.Find(20)<<endl;
}
