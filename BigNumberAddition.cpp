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
char DigitstoChar(int ch){
  return ch +'0';
}
int charToDigits(char ch){
   return ch - '0';
}
string addNumbers(string n1, string n2){
  if (n1.length()>n2.length()){
    swap(n1,n2);
  }
  // result 
  string result =" ";
  reverse(n1.begin(),n1.end());
  reverse(n2.begin(),n2.end());
 // adđ digits to n1
 int carry = 0;
 for(int i=0; i< n1.length();i++){
  int d1=charToDigits(n1[i]);
  int d2=charToDigits(n2[i]);
  int sum= d1 + d2 + carry;
  int output_digits = sum % 10;
  carry = sum/10;
  result.pb(DigitstoChar(output_digits));
}
 for(int i=n1.length();i<n2.length();i++){
  int d2=charToDigits(n2[i]);
  int sum = d2 + carry;
  int output_digits = sum%10;
 carry = sum / 10;
  result.pb(DigitstoChar(output_digits));
 }
 if(carry){
    result.pb('1');
 }
 reverse(result.begin(), result.end());
 return result;
}
int main(){
  //string
  string s1,s2;
  cin>> s1>> s2;
  string result= addNumbers(s1,s2);
  cout<<"a + b = "<<result<<endl;
  return 0;
}