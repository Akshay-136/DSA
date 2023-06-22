#include<iostream>
using namespace std;
int fibbo(int n){
    if (n==0){//in ques it is mentioned first term as 0th term
        return 0;
    }
    if (n==1){
        return 1;
    }
    else{
        return fibbo (n-2) + fibbo(n-1);
    }
}
int main(){
    int n ;
    cin>>n;
    cout<<fibbo(n);
}
