#include<bits/stdc++.h>
using namespace std;
#define N 10000
#define ll long long
void primeSeive(vector<int> &m) {
  for(int i=1;i<=N;i++){
    m[i]=i;
  }
 for(int i=2;i<=N;i++){
       if(m[i]==i){
     for(ll j=i*i;j<=N;j+=i){
        if(m[j]==j){
            m[j]=i;
     }
       }
 }
}
}
vector<int> getFactors(int number, vector<int> &m){
    vector<int> Factor;
while(number!=1){
    Factor.push_back(m[number]);
    number=number/m[number];
}
 return Factor;
}
int main(){
    vector<int> m(N+1,0);
    primeSeive(m);
      int number; 
      cin >> number;
vector<int> Factor = getFactors(number,m);
for(auto x: Factor){
    cout<<x<<" ";
}
    return 0;
}