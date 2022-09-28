#include<bits/stdc++.h>
using namespace std;
#define N 100000
#define ll long long
int SeiveArr[N+1]={0};
vector<int> Primes;
// Seive of Eratosthenes O(NLogLogN)
void sieve() {
   for(ll i =2 ;i <= N; i++){
      if(SeiveArr[i]==0){
       Primes.push_back(i); // add prime number to primes vector
     for(ll j=i*i;j<=N;j+=i){
       SeiveArr[i] = 1; // mark numbers which are not prime 
     }
      }
   }
}
int main () {
 int t;    // initialize the number of test cases
 cin >> t;
 sieve();
while(t--){
   int m,n; cin>>m>>n;
 vector<int> segmented(n-m+1,0);
 for(auto p:Primes){
    if((p*p)>n){
        break;
    }
    int start = (m/p)*p;
    // don't start from 0, start from 2*p instead
  if(p>=m && p<=n){
    start = 2* p;
  }
  for(ll j=start;j<=n;j+=p){
    if(j<m){
        continue;
    }
    segmented[j-m]=1; // mark no are not prime
  }
 }
  for(ll i=m;i<=n;i++){
    if(segmented[i-m]==0 && i!=1){
        cout<<i<<" "<<endl;
    }
 }
 cout<<endl;
}
 return 0;
}