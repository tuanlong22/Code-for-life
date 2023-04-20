#include<bits/stdc++.h>
using namespace std;
// function to check if brackets are valid
bool areMatching(string s){
	// declare a stack to hold the previous bracket
	stack<char> temp;
	for(int i=0;i<s.length();i++){
		if(temp.empty()){
			//when the stack is empty, just push the current bracket
			temp.push(s[i]);
		}
		else if((temp.top() == '(' && s[i]==')' || temp.top() == '[' && s[i]==']' || temp.top() == '{' && s[i]=='}')){
			temp.pop();
			}
		else{
			temp.push(s[i]);
		}
	}
	if(temp.empty()){
		return true;
	}
	return false;
	
}
int main(){
	string s;
	cin>>s;
	//call a function
	if(areMatching(s)){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	return 0;
}
