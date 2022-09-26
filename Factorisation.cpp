#include<bits/stdc++.h>
using namespace std;
#define ll long long
// find factorisation with O(n) time complexity
void factorisation(int n){
    for(int i=2;i<=n;i++){
        int count =0;
    if(n%i==0){
        while(n%i==0)
        {
            n=n/i;
            count++;
        }
        cout<<i<<"^"<<count<<",";
    }

 }

}
// Optimised approach with O(sqrt(N)) time complexity
void optimised_approach(int n){
    for(int i=2;i*i<=n;i++){
       int count = 0;
     if(n%i==0){
       while(n%i==0){
        n=n/i;
        count++;
       }
       cout<<i<<"^"<<count<<",";
    }
    }
if(n!=1){
    cout<<n<<"^1";
}
}
int main() {
    ll n;
    cin >> n;
   optimised_approach(n);
    return 0;
}