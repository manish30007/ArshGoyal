#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
       int count =0;
       long long p=1;
       int s =0;
       int end=0;
       while(end<n){
           p*=a[end];
           while(p>=k)
               p/=a[s++];
           count+=end-s+1;
           end++;}
           return count ;
       }
       };
int main(){
int t;
cin>>t;
while(t--){
    int n;
    long long k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    Solution ob;
    int ans =ob.countSubArrayProductLessThanK(arr,n,k);
    cout<<ans<<endl;

}
return 0;
}