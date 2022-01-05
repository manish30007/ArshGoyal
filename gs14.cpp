#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int size=INT_MAX;
        int sum=0;
        int end=0;
        int start=0;
        int total_sum =0;
        for(int i=0;i<n;i++){
            total_sum+=nums[i];
}
        if(total_sum<target){return 0;}
     while(end<n){
            while (sum<target &&end<n){
            sum += nums[end++];       
}
         
   while(sum>=target && start<n){
       if(end-start<size)size=end-start;
          sum-=nums[start++];    
   }
        }
        
      return size;  
    }
};
int main(){
 int t;
 cin>>t;
 while(t--){
     int n,target;
     cin>>n>>target;
     vector<int>v(n);
     for(int i=0;i<n;i++)cin>>v[i];
     Solution ob;
     int ans =ob.minSubArrayLen(target,v);
     cout<<ans<<endl;
 }
return 0;
}