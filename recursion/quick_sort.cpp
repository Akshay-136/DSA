#include<iostream>
using namespace std;
int partition(int arr[] , int s , int e){
    int pivot = arr[s];
    int count =0;
    for(int i = s+1; i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //pivot at right pos
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);

    //left and right wala part 
    int i =s , j =e;
    while(i<pivotIndex && j>pivotIndex){
        while (arr[i]<=pivot){
            i++; 
        }
        while (arr[j]>pivot){
            j--; 
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }

        
    }
    return pivotIndex;

}

void quickSort(int arr[] , int s , int e){
    if(s>=e){
        return ;
    }

    int p = partition(arr,s,e);
//left part sort
    quickSort(arr,s,p-1);
// right part
    quickSort(arr,p+1,e);
}

int main(){
    int arr[7]={10,5,99,150,170,999,1};
    int n =7;
    partition(arr,0,6);
    for(int i =0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
}