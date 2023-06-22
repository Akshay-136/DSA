#include<iostream>
using namespace std;

bool check(string s , int i , int j){
    if(i>j){
        return true ;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
        return check(s,i+1,j-1);
    }
    
}
int main(){
    string s = "bookkoob";
    bool ans = check(s,0,s.length()-1);
    if(ans){
        cout<<"yes palindrome"<<endl;
    }
    else{
        cout<<"no palindrome"<<endl;
    }
}