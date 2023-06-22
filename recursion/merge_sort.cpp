#include<iostream>
#include<math.h>
using namespace std;
void merge(int *arr , int s , int e){

    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int (len1);
    int *second = new int(len2);
    int mainArrayind =s;
    for(int i =0 ; i<len1;i++){
        first[i]=arr[mainArrayind++];
    }
    mainArrayind = mid+1;
    for(int i =0 ; i<len1;i++){
        second[i]=arr[mainArrayind++];
    }
    // merge 2 sorted arrays
    int index1 =0;
    int index2 =0;
    mainArrayind=s;
    
    while(index1 <len1 && index2 <len2){
        if(first[index1]<second[index2]){
            arr[mainArrayind++]=first[index1++];
        }
        else{
            arr[mainArrayind++]=second[index2++];
        }
    }
    while(index1 <len1 ){
        arr[mainArrayind++]=first[index1++];
    }
    while(index2 <len2 ){
        arr[mainArrayind++]=second[index2++];
    }
    delete []first;// to save memory
    delete []second;

        

}
void mergeSort(int *arr , int s , int e){
    if(s>=e){
        return ;
    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    int arr[5]={2,1,9,8,4};
    int n =5;
    mergeSort(arr,0, n-1);
    for(int i =0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
}