#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //constructor
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};
void insertAthead(Node* &head,int d){
    //if empty list
    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    
}
void insertAtTail(Node* &tail,int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        temp=tail;
    }
    else{
        Node* temp = new Node(d);
        tail->next=temp;
        temp -> prev=tail;
        tail=temp;
    }
}