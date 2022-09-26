#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100000
vector<int> csum(N+1);
void seive(vector<int> &l){
    l[0] = l[1] = 0;
    l[2] =1;
 for(int i = 3;i<=N; i+=2){
       l[i]=1;
 }
 for(ll i=3;i<=N;i++){  
    if(l[i]){
    for(ll j=i*i;j<=N;j+=i){
         l[j]=0;
    }
 }
}
 
}
int main() {
    //  ll m; cin >> m;
 
    vector<int> l(N+1,0);
    seive(l);
    // pre compute the primes upto an index i
    for(ll i=1;i<=100;i++){
         csum[i]=csum[i-1]+l[i];
    }
  int q;
 cin>> q;
while(q--){
    int a,b;
 cin>>a>>b;
cout<<csum[b]-csum[a-1]<<endl;
}
 return 0;
}
