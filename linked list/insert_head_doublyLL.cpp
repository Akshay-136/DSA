#include<iostream>
using namespace std;
// insert at head
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
//traversing a linked list  
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//gives length of Linked List 
int getLength(Node* head){
    int len = 0;
    Node*temp = head;
    while(temp != NULL ){
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAthead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

int main(){
    Node* node1=new Node(20);
    Node* head = node1;
    print(head);

    cout<<getLength(head)<<endl;

    insertAthead (head,5);
    print(head);

    insertAthead (head,15);
    print(head);
}