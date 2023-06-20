#include<iostream>
using namespace std;
void selection(int arr[],int n ){
    for(int i = 0 ; i<n-2;i++){
        int m = i;
        for(int j = i ; j<n-1;j++){
            if(arr[j]<arr[m]){
                m=j;
            }
        }
        swap(arr[i],arr[m]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    selection(arr,n);
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}