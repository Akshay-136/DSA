#include<iostream>
#include<math.h>
using namespace std;

void Sort(int * arr , int n ){
    if(n==0 || n==1){
        return ;
    }
    for(int i = 0 ; i<n ; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    Sort(arr,n-1);
}
int main(){
    int n =5;
   
    int arr[n]={45,4,88,7,9};
    Sort(arr,n);
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
//selection and insertion hw  