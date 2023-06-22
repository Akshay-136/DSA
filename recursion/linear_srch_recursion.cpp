#include<iostream>
using namespace std;
bool check(int*arr , int size , int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    return check(arr+1,size-1,key);
}
int main(){
    int n =5;
    int arr[n]={5,9,7,8,3};
    int key=4;
    bool ans = check(arr,n,key);
    if(ans){
        cout<<"yes found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}