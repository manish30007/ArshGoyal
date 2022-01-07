#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        deque<int>dq;
        vector<int>ans;
        for(int i=0;i<k;i++){
            while(!dq.empty()&&dq.back()<arr[i]){
                dq.pop_back();
            }
            dq.push_back(arr[i]);
        }
         ans.push_back(dq.front());
        
         for(int i=k;i<n;i++){
             if(dq.front()==arr[i-k])dq.pop_front();
            while(!dq.empty()&&dq.back()<arr[i]){
                dq.pop_back();
            }
            dq.push_back(arr[i]);
        ans.push_back(dq.front());
        }
        return ans;
    }
};
int main(){

int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
Solution o;
vector<int>res=o.max_of_subarrays(arr,n,k);
for(int i=0;i<res.size();i++){
   cout<<res[i]<<" ";
}
cout<<endl;
}
return 0;
}
