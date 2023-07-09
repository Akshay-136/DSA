#include<iostream> //FIFO property
using namespace std;
#include<math.h>
class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class queue{
    Node* front;
    Node* back;
public:
    queue(){
        front=NULL;
        back=NULL;
    }
    void push(int x){
        Node*n = new Node(x);
        if(front==NULL){
            back = n ; 
            front = n;
            return ;
        }
        back -> next = n;
        back = n;
    }
    void pop(){
        if(front == NULL){
            cout<<"queue underflow"<<endl;
            return;
        }
        Node* todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek(){
        if(front==NULL){
            cout<<"queue has no element"<<endl;
        }
        return front->data;
    }
    bool empty(){
        if(front==NULL ){
            return true;
        }
        return false;
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(5);
    q.push(4);
    q.push(7);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
}
