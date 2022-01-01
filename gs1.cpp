#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;
class Solution{
    public:

vector<vector<string>> Anagram(vector<string>& a){
map<string ,vector<string>> m;
for(int i=0; i<a.size();i++){
    string s=a[i];
    sort(s.begin(),s.end());
    m[s].push_back(a[i]);
}
vector<vector<string>>ans(m.size());
int idx=0;
for(auto x:m){
    
    auto v=x.second;
    for(int i=0;i<v.size();i++){
        ans[idx].push_back(v[i]);
    }
    idx++;
}
return ans;
}
};


int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<string>str_list(n);
    for(int i=0;i<n;i++){
        cin>>str_list[i];
    }
    Solution ob;
    vector<vector<string>> result=ob.Anagram(str_list);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}