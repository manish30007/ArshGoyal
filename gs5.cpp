#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
class Solution{
public:	
	ull getNthUglyNo(int n) {
	    int p2=0;
	    int p3=0;
	    int p5=0;
	    vector<ull>ans;
	    ans.push_back(1);
	    while(ans.size()<n){
	        ull min_no=min(2*ans[p2],3*ans[p3]);
	        min_no=min(min_no,5*ans[p5]);
	        ans.push_back(min_no);
	        if(min_no==2*ans[p2])p2++;
	        if(min_no==3*ans[p3])p3++;
	        if(min_no==5*ans[p5])p5++;
	        
	    }
	    return ans[n-1];
	}
};
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    Solution ob;
    auto ans=ob.getNthUglyNo(n);
    cout<<ans<<endl;
}
return 0;
}