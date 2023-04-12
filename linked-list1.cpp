#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
}*first,*second,*third = NULL;
void Create(int A[],int n){
	struct Node *last,*t;
	int i=0;
	first = new struct Node;
	first->data = A[0];
	first->next = t;
	last=first;
	for(i=1;i<n;i++){
		t = new struct Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last=t;
	}
}

//
void Display(struct Node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}

// Check whether the linked list is sorted
bool CheckSorted(struct Node *p){
	int x = -10000;
	while(p!=NULL){
	    if(x<(p->data)){
			x = p->data;
			p = p->next;
		}
		else{
			return false;
		}
	}
	return true;
}


// inserting a new node inside a linked list
void InsertingNode(int pos,int x){
	struct Node *p,*t;
	// insert a node before a linked list
	if(pos==0){
		p = new struct Node;
		p->data = x;
		p->next=first;
		first=p;
	}
	else{
	    p = first;
	    for(int i=0;i<pos-1 && p;i++){
	    	p=p->next;
		}
	    if(p){
	    		t = new struct Node;
	    		t->data = x;
	    		t->next = p->next;
	    		p->next = t;
		}
	}
}

//Inserting a Node in a sorted linked list
void InsertInSorted(int x){
	struct Node *p,*t,*q;
	p = first;
	while(p && p->data < x){
		q=p;
		p=p->next;
	}
	t= new struct Node;
    t->data = x;
    t->next = q->next;
    q->next = t;
}

//Deleting a Node from a linked list
void Delete(int pos){
	struct Node *p,*q;
	int x,i;
	if(pos == 1){
		x=first->data;
		p=first;
		first = first->next;
		delete p;
	}
	else{
		p=first;
		q=NULL;
		for(i=0;i<pos-1 &&p; i++){
			q=p;
			p=p->next;
		}
		if(p){
			q->next=p->next;
			x=p->data;
			delete p;
		}
	}
}

void Create2(int A[],int n){
	struct Node *last,*t;
	int i=0;
	second = new struct Node;
	second ->data = A[0];
	second->next = t;
	last=second;
	for(i=1;i<n;i++){
		t = new struct Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last=t;
	}
}

void Concat(struct Node *p,struct Node *q){
	third=p;
	
	while(p->next!=NULL){
		p=p->next;
		p->next=q;
	}
}

int isLoop(struct Node *f){
	struct Node *p,*q;
	p=q=first;
	do{
		p=p->next;
		q=q->next;
		q=q?q->next:q;
	}while(p&&q && p!=q);
	if(p==q){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	struct Node *t1,*t2;
	int A[]={10,20,30,40,50};
	Create(A,5);
	t1=first->next->next;
	t2=first->next->next->next->next;
	t2->next=t1;
	cout<<isLoop(first);
	
}
