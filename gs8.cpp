#include<iostream>
using namespace std;
class Solution{
public:
int pos(int m,int n,int k){
if(n==0||n==1)return n;
if(k>n)return 0;
int temp=m%n;
if(temp==0)return n;
else{
if(temp+k-1<n)return temp+k-1;
else return (temp+k-1)%n;
}
}};
int main(){
int t;
cin>>t;
while(t--){
int m,n,k;
cin>>m>>n>>k;
Solution ob;
int ans=ob.pos(m,n,k);
cout<<ans<<endl;
}
return 0;
}