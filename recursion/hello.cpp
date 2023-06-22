#include<bits/stdc++.h>
using namespace std;

 int removeDuplicates(vector<int> nums) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i<nums.size();i++){
          mp[nums[i]]++;

        }
        
        return mp.size();
    }

int main(){

  int n;
  cin>>n;

  vector<int>nums(n);

  for(int i=0;i<n;i++){
    cin>>nums[i];
  }

  int ans =  removeDuplicates(nums);

  cout<<ans<<endl;

    return 0;
}