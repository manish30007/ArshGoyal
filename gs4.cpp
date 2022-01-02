#include<bits/stdc++.h>
using namespace std;
string encode(string src)
{  
 int count=1,n=src.size();
 string ans="";
ans+=src[0];
for(int i=1;i<n;i++){
    if(src[i]==src[i-1])count++;
    else{
        ans+=count+'0';
        ans+=src[i];
        count=1;
    }
}
ans+=count+'0';
 return ans;
}     
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    string ans=encode(s);
    cout<<ans<<endl;
    
}
return 0;
}