#include <bits/stdc++.h> 
using namespace std;
#define ll long long int
#define F first
#define S second
#define pb push_back
#define mii map <int, int>
#define  msi map<string,int>
#define vi vector<int>
#define si set<int>
#define pi priority_queue<int>
#define is insert
// map<int,long long> so;
// ll FF(int n){
//    if(n<3){
//     return n;
//    }
//    auto x = so.find(n);
//    if(x == so.end()){
//     int k = n/3;
//     long long v = FF(2*k);
//     if(n%3 > 0){
//     v+= FF(2*k + 1);
//    }
//    if(n%3>1){
//     v+=FF(2*k+2);
//    }
//    so[n]=v;
//  }
//  return so[n];
// } 
// int main () {
//    int n; cin>>n;
//    cout<<n<<"\n";
//    cout<<"F("<<n<<") = "<<FF(n);
//   return 0;
// }
int main () {
int n;
cin >> n;
vector<int> primenumber={2,3,5}; int m = primenumber.size();
int ans =0;
 for(int i=1;i<(1<<m);i++){
   int b=__builtin_popcount(i);
   int lcm = 1;
   for(int j=0;j<m;j++){
    if(i&(1<<j)){
      lcm=lcm*primenumber[j];
    }
   }
   if(b%2 == 0){
    ans -= n/lcm;
   }
   else {
    ans += n/lcm;
   }
 }
 cout<<ans<<endl;
 return 0;
}