#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        
       unordered_map<int,int> m;
       int n=nums.size();
       if(n%2!=0){return false;}
       
       for(int i=0;i<n;i++){
           m[nums[i]%k]++;
       }
       for(int i=0;i<n;i++){
           int rem1=nums[i]%k;
           if(rem1==0 ){if(m[rem1]%2!=0){
            return false;}
           }
        else{
            int rem2=k-rem1;
            if(rem2==rem1 and m[rem2]%2!=0){
                return false;
            }
            if(m.find(rem2)==m.end()){return false;
        }
        if(m[rem1]!=m[rem2]){return false;}
       }
       }
       return true;
    }
};
int main(){
int t;
cin>>t;
while(t--){
     int n,k;
     cin>>n>>k;
     vector<int>v(n);
     for(int i=0;i<n;i++){
         cin>>v[i];
     }
     Solution ob;
     bool ans=ob.canPair(v,k);
     if(ans)cout<<"True"<<endl;
     else cout<<"False"<<endl;
}
return 0;
}