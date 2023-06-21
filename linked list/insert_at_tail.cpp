#include<iostream>
using namespace std;
// insert at head
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
 
void insert_at_tail(Node* tail , int m){
    Node * temp = new Node(m);
    tail -> next = temp ;
    tail = temp;
}
void print(Node* &head){
    Node* temp = head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}
int main(){ 
    Node* node1 = new Node(10);
   // cout<< node1 ->data<<endl;
   // cout<< node1 ->next<<endl;
    
    //tail pointed to node 1 
    Node* tail = node1;
    print(tail);

    insert_at_tail(tail,13);
    print(tail);

}

