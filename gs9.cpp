#include<bits/stdc++.h>
using namespace std;
class Solution{   
public:
    string printMinNumberForPattern(string S){
        
        string ans="";
        stack<char> st;
            int A=1;
        for(int i=0;i<S.length();i++){
            char c=A+'0';
            if(S[i]=='D'){
            st.push(c);
            A++;}
            else { st.push(c);
            A++;
            while(!st.empty()){
            ans+=st.top();
            st.pop();
            }}
        }
        char c=A+'0';
        st.push(c);
        while(!st.empty()){
            ans+=st.top();
            st.pop();}
        return ans;
    }
};
int main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
Solution ob;
string ans= ob.printMinNumberForPattern(s);
cout<<ans<<endl;
}
return 0;
}