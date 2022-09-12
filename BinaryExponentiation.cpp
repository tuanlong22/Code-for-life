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
int powr(int a,int b){
    int res = 1;
    while(b){
        if(b&1){
            res = res * a;
        }
        a= a*a;
        b=b>>1;
    }
        return res;
    }
int main() {
    int a,b;
    cin>> a >> b;
    cout<<powr(a,b);
    return 0;
}