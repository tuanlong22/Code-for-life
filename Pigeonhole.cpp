#include<bits/stdc++.h>
using namespace std;
vector<int>a(10000);
int main (){
   int t;
   cin >> t;
   while(t--){
    int n;
    cin >> n;
 vector<int> b(10000,-1);
  for(int i=1;i<=n;i++){
    cin>>a[i];
}
int sum=0;
 b[0] = 0;
 vector<int> ans;
   for(int i=0;i<=n;i++){
     sum+=a[i];
     sum=sum%n;
    if(b[sum]!=-1){
      int res= b[sum]+1;
      for(int j=res;j<=i;j++){
             ans.push_back(j);
      }
      break;
    }
    b[sum]=i;
   }
   cout<<ans.size()<<endl;
   for(auto x:ans){
    cout<<x <<endl;
   }
   return 0;
}