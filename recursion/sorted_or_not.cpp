#include<iostream>
using namespace std;
bool isSorted(int *arr , int size){
    if(size==0 || size ==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remain = isSorted(arr+1,size-1);
        return remain;

    }
}
int main(){
    int arr[5]={2,6,8,9,7};
    int size=5;
    int ans = isSorted(arr,size);
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"Array not sorted"<<endl;
    }
}