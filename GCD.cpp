#include<bits/stdc++.h>
using namespace std;
// Euclid's algorithm
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

// Extended Euclid's algorithm 
vector<int>ExtendedGcd(int a,int b){
    if(b==0){
        return{1,0,a}; // x = 1 and y = 0
    }
vector<int> result = ExtendedGcd(b,a%b);
  int smallX= result[0];    // x = 0
  int smallY= result[1];    // y = 1
  int gcd = result[2]; 
  int x = smallY;
  int y = smallX - (a/b)*smallY;
  return {x,y,gcd};
}
int main () {
    int a,b;
    cin>>a>>b;
   vector<int> result= ExtendedGcd(a,b);
   cout<<result[0]<<" and "<<result[1]<<" gcd "<<result[2]<<endl;
   cout<<"Algorithm Euclid's "<< gcd(a,b)<<endl;
   return 0;
}