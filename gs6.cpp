#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    string small_str,large_str;
       if(str1.length()>=str2.length()){
           small_str=str2;
           large_str=str1;
       }
        else{
            small_str=str1;
            large_str=str2;
       }
        auto found=large_str.find(small_str);
        if(found!=string::npos){
        int size=__gcd(large_str.length(),small_str.length());
        string ans=small_str.substr(0,size);
        string temp="";
        for(int i=0;i<large_str.length()/size;i++){
            temp=temp+ans;
        }
        if(temp==large_str)return ans;
        else return "";}
        else return "";
    }
};
int main(){
int t;
cin>>t;
while(t--){
    string s1,s2;
    cin>>s1>>s2;
    Solution ob;
    string ans=ob.gcdOfStrings(s1,s2);
    cout<<ans<<endl;
}
return 0;
}