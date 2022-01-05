#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
  string decodedString(string s){
stack<char> st;
        st.push(s[0]);
        int i =1;
        string res = "", temp = "", ans ="";
        string id = "";
        int num = 0;
        
        while(i < s.size())
        {
           if(s[i] != ']')
           {
               st.push(s[i]);
            }
            else
            {
                while(st.top() != '[')
                {
                   res = st.top() + res;
                   st.pop();
                }
                st.pop();
                
                while(st.top()>= 48 && st.top()<= 57)
                {
                    id = st.top() + id;
                    st.pop();
                    
                    if(st.empty())
                    break;
                }
                
                // int num = stoi(id);
                
                for(int l = 0; l < id.length(); l++)
                {
                  num = num * 10 + id[l] - '0';
                }
                
                for(int j=1; j<= num; ++j)
                {
                    temp = temp + res;
                }
                
                if(st.empty())
                {
                    ans = temp;
                    break;
                }
                
                for(int i=0; i< temp.size(); ++i)
                {
                    st.push(temp[i]);
                }
                
                res = "";
                temp= "";
                id = "";
                num = 0;
            }
            
            i++;
        }
        
        return ans;
    }};
int main(){

int t;
cin>>t;
while(t--){
string s;
cin>>s;
Solution ob;
string ans=ob.decodedString(s);
cout<<ans<<endl;
}
return 0;
}