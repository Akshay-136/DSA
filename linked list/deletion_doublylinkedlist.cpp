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
    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next=NULL;

        }
        cout<<"memory free for node with data "<< val<<endl;
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
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertAtPosition(Node* &tail ,Node* &head , int position , int d){
    if(position==1){
        insertAthead(head , d);
        return;
    }
    Node*temp = head;
    int cnt = 1;
    while(cnt< position-1){
        temp = temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    // insert at any position
    Node* nodetoInsert = new Node(d);
    nodetoInsert->next = temp ->next;
    temp->next->prev=nodetoInsert;
    temp->next=nodetoInsert;
    nodetoInsert->prev=temp;
}
void delete_node(int position ,Node* &head ){
    //deleting first node
    if(position==1){
        Node* temp = head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
       //delete any other Node
       Node* curr=head;
       Node* prev=NULL;

       int cnt = 1;
       while(cnt<position){
        prev=curr;
        curr= curr->next;
        cnt++;
       }
       curr->prev = NULL;
       prev->next=curr->next;
       curr->next=NULL;
       delete curr;

    }
}

int main(){
    Node* node1=new Node(20);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    cout<<getLength(head)<<endl;

    insertAthead (head,5);
    print(head);

    insertAthead (head,15);
    print(head);

    insertAtTail (tail,25);
    print(head);

    insertAtPosition (tail,head,2,100);
    print(head);

    insertAtPosition (tail,head,1,101);
    print(head);

    delete_node(1,head);
    print(head);

     delete_node(3,head);
    print(head);

}