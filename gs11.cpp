#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
      int A,B;
      for(int i=0;i<n;i++){
          if(arr[abs(arr[i])-1]<0)B=abs(arr[i]);
          else{
              arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
          }
      }
      for(int i=0;i<n;i++){
          if(arr[i]>0){A=i+1;
          break;}
      }
      int*p= new int[2];
      p[0]=B;
      p[1]=A;
       return p; 
        }
    
};
int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
Solution ob;
int*ans=ob.findTwoElement(arr,n);
cout<<ans[0]<<" "<<ans[1]<<endl;
}
return 0;
}