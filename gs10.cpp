#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> kLargest(int arr[], int n, int k)
    {
    priority_queue<int,vector<int>,greater<int>> p;
    for(int i=0;i<n;i++){
        if(i<k){
            p.push(arr[i]);
        }
        else{
            
            if(arr[i]>p.top()){
                p.pop();
                p.push(arr[i]);
            }
        }
    }
    vector<int>v;
    stack<int>st;
        while(p.size()>0){
            int temp=p.top();
            p.pop();
            st.push(temp);
        }
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        return v;
    }
};
int main(){

int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
Solution ob;
vector<int>result=ob.kLargest(arr,n,k);
for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}
cout<<endl;
}
return 0;
}