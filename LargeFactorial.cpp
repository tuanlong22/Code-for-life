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
void mutiply(vector<int> &arr, int no, int &size) // create a method 
{
     int carry=0;
    for(int i=0;i<size;i++){
        int product = arr[i]*no + carry;
        arr[i] = product%10;   // make sure to store the value with one digit
        carry = product/10; 
    }
    while(carry){
         arr[size] = carry%10;
         size++;
         carry = carry/10;
    }
}
void BigFractorial(int n){
    vector<int> arr(1000,0);    //declare a vector to store the output 
  arr[0]=1; // set a[0] equal to 1 because fractorial of 1 is 1
  int size = 1;
  for(int i=2;i<=n;i++){ // create a loop to complete the outcome by mutiplying 
     mutiply(arr,i,size);
  }
  // Print the result in the reversed order
  for(int i=size -1 ; i>=0 ; i--){
    cout<<arr[i];
  }
}
int main () {
    int n;
    cin >> n;
    BigFractorial(n);
    return 0;
}