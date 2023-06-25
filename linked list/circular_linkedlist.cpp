#include<iostream>
using namespace std;;
class Node{
    public:
    int data ;
    Node* next = NULL;
    //constructor
    Node(int d){
        this->data=d;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next !=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }

};