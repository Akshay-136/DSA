#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    int smallerprob=power(n-1);
    int bigprob=2 * smallerprob;

    return bigprob;
    //return 2*power(n-1);  directly write this
}
int main(){
    int n ;
    cin>>n;
    int ans = power(n);
    cout<<ans<<endl;
}