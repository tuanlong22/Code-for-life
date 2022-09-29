#include<bits/stdc++.h>
using namespace std;
// find out the greatest common divisor
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
// find the value of x and y
vector<int> ExtendedGCD(int a,int b){
      if(b==0){
        return {1,0,gcd(a,b)};
      }
    vector<int> result = ExtendedGCD(b,a%b);
   int smallX = result[0];
   int smallY = result[1];
int div = result[2];
   int x = smallY;
   int y = smallX - (a/b)*smallY;
   return {x,y,div};
}
// code for computing MMI
int modInverse(int a,int m){
    vector<int> result = ExtendedGCD(a,m);
    int x =result[0];
    int div = result[2];
    if(div!=1){
        cout<<"Multiplicative Modulo Inverse doesn't exist: ";
        return -1;
    }
     int ans = (x%m+ m)%m; // x can be negative also
  return ans;
}
int main() {
     int a,m;
     cin>>a>>m;
     cout<<"The multiplicative Modulo Inverse is: "<<modInverse(a,m)<<endl;
    return 0;
}