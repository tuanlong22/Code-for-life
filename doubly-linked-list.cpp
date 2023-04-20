#include<bits/stdc++.h>
using namespace std;
// struct of a doubly linked-list node
struct dllist{
   int data;
   struct dllist *next;
   struct dllist *prev;
};

struct dllist *head,*tail = NULL;
// add a new node to the end of a list
void append_node(struct dllist *lnode){
	if(head == NULL){
		head = lnode;
		lnode->prev = NULL;
	}
	else{
		tail->next=lnode;
		lnode->prev=tail;
	}
	tail = lnode;
	lnode->next=NULL;
}
//add a new node after a node pointed by after*
void insert_node(struct dllist *lnode, struct dllist *after){
	lnode->next = after->next;
	lnode->prev = after;
	if(after->next != NULL){
		after->next->prev=lnode;
	}
	else{
		tail = lnode;
	}
	after->next=lnode;
}
//remove a node from a doubly linked list
void remover(struct dllist *lnode){
	if(lnode->prev == NULL){
		head = lnode -> next;
	}
	else{
		lnode->prev->next = lnode->next;
	}
	if(lnode->next == NULL){
		tail = lnode-data>prev;
	}
	else{
		lnode->next->prev = lnode->prev;
	}
}
int main(){
	struct dllist *lnode;
	int i=0;
	// add some element in a list
	for(i=0;i<=5;i++){
		lnode = new dllist;
		lnode -> data = i;
		append_node(lnode);
	}
	
	//print all the element from the end back to the first
	
    for(lnode = tail; lnode != NULL; lnode = lnode->prev){
    	cout<<lnode->data<<endl;
	}
	return 0;
}
