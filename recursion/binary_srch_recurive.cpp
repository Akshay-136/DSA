#include<iostream>
using namespace std;
bool search(int *arr ,int s , int e ,int k){
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
   
    if(arr[mid]<k){
        return search(arr,mid+1,e,k);
    }
    else{
        return search(arr,s,mid-1,k);
    }
}
int main(){
    int n =5;
    int arr[n]={5,9,7,8,3};
    int key=5;
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    bool ans = search(arr,s,e,key);
    if(ans){
        cout<<"yes found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}