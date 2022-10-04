#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define P 7
#define N 10000
int fact[N];
// Modulo Arithmetic
ll addm(ll x,ll y){
   return (x + y) % P;
}
ll subm(ll x, ll y){
    return (((x-y)%P + P)%P);
}
ll mulm(ll x,ll y){
    return (x*y) % P;
}
ll powr(ll x, ll y){
    ll res = 1;
  while(y){
    if(y&1){
        res = mulm(res, x);
    }
        y=y>>1;
        x = mulm(x,x);
    
 }
  return res;
}
// Fermat's Thẻoem
ll divm(ll x, ll y){
    return mulm(x, powr(y,P-2));
}
// Factorial % P
// First, calculate the factorial
void calculate_Factorial(){
     fact[0] = 1;
    for(int i=1; i< N; i++){
        fact[i] = mulm(fact[i-1],i);
    }
}
// Combination % P
ll Combination(ll x,ll n){
      calculate_Factorial();
   return mulm(mulm(fact[n],powr(x,P-2)),powr(fact[n-x],P-2));
}
// Permutation % P
ll Permutation(ll x,ll n){
      calculate_Factorial();
   return mulm(fact[n],powr(fact[n-x],P-2));
}
// Totient fuction
void Totient(ll x){
    vector<bool> Prime(N,true);
    vector<ll> fill(N);
  for(int i=2;i<N;i++){
    for(int j=i*i;j<N;j+=i){
        Prime[j] = false;
  }
}
 iota(fill.begin(),fill.end(),0);
 for(int i=2;i<N;i++){
  if(Prime[i]==true){
    for(int j = i;j<N;j+=i){

         fill[j] = fill[j]/i;
         fill[j] = fill[j]*(i-1);
   
    }
  }
 }
 for(int i=1;i<= x;i++ ){
    cout<<i<<" "<<fill[i]<<endl;
 }
}
int main() {
    ll x,y;
  cin >> x >> y;
   //cout<<divm(x,y);
//    calculate_Factorial();
//    cout<<fact[5];
// cout<<Combination(x,y);
  Totient(x);
    return 0;
}