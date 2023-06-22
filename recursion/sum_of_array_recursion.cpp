#include <iostream>
using namespace std;
int sum(int *arr , int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int ans = arr[0]+sum(arr+1,size-1);
    return ans;
}
int main(){
    int n = 5;
    int arr[5]={2,5,9,7,10};
    cout<<sum(arr,n);
}