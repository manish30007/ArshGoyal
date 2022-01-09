#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		string FirstNonRepeating(string A){
        vector<int>vis(26,0);
        vector<char>v;
        string ans="";
        int n=A.length();
        for(int i=0;i<n;i++){
            if(!vis[A[i]-'a']){
                v.push_back(A[i]);
            }
            vis[A[i]-'a']++;
            int f=0;
            int m=v.size();
            for(int j=0;j<m;j++){
            if(vis[v[j]-'a']==1){
               ans+=v[j];
               f=1;
               break;
            }
            }
            if(f==0){
                ans+='#';
            }
        }
        return ans;
		}
};
int main(){

int t;
cin>>t;
while(t--){
string A;
cin>>A;
Solution o;
string ans=o.FirstNonRepeating(A);
cout<<ans<<endl;
}
return 0;
}