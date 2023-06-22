#include<iostream>
using namespace std;
// insert at head
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete this->next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
void InsertAtHead(Node* &head , int d){
    //new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}
void insert_at_tail(Node* &tail , int m){
    Node * temp = new Node(m);
    tail -> next = temp ;
    tail = temp;
}
void insert_middle(Node* head , int position , int e ){
    if(position == 1){
        InsertAtHead(head , e);
        return;
    }
    Node* temp = head;
    int cnt =1; // current position pheli node pr hum h 
    while(cnt<position -1){ //hume n-1 node tk jana h 
        temp = temp->next;
        cnt++;
    }
    //create node for e
    Node* nodeToInsert = new Node(e);
    nodeToInsert->next = temp->next;
    temp->next=nodeToInsert;
}
void delete_Node(Node* &head , int position){
    if(position == 1){
        Node * temp = head;
        head = head->next;
        //memory free start node
        temp->next=NULL; // unwanted node next removed 
        delete temp;
    }else{
        //del any midle or last node
        Node* prev = NULL;
        Node* curr = head;
        int cnt =1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev ->next = curr->next;
        curr->next=NULL;
        delete curr;
        
    }
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
    
    //head pointed to node 1 
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insert_at_tail(tail,12);
    print(head);
    insert_at_tail(tail,15);
    print(head);
    insert_middle(head,3,23);
    print(head);

    cout<<"head "<<head -> data <<endl;
    cout<<"tail "<<tail -> data<<endl;

    delete_Node(head,3);
    print(head);
}

