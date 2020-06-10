#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node(int data){
		this->data=data;
	}
};
void push(Node** head,int data){
	Node* n= new Node(data);
	n->next=(*head)->next;
	*head=n;

}
void pushafter(Node* prev_node,int data){
	 if (prev_node == NULL)  
    {  
        cout<<"the given previous node cannot be NULL";  
        return;  
    } 
	Node*n= new Node(data);
	n->next=prev_node->next;
	prev_node->next=n;
}
void append(Node** head,int data){
	Node*n= new Node(data);
	if(head==NULL){
		*head=n;
	}
	Node* last=*head;
	while(last->next!=NULL){
		last=last->next;

	}
	last->next=n;
	n->next=NULL;
}
void PrintLIst(Node* n){
	while(n!=NULL){
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main(){
		Node* head=NULL;
		push(&head,1);
		push(&head,3);
		append(&head,4);
		pushafter(head->next,2);
		PrintLIst(head);
		return 0;
}