#include<iostream>
using namespace std;
int count(int n ){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans = count(n-1)+count(n-2);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<count(n);
}