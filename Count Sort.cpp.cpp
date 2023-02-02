#include<bits/stdc++.h>
using namespace std;
int findmax(int a[],int n){
	int max = a[0];
	for(int i=0;i<n;i++){
		if(a[i]>=max){
			max = a[i];
		}
	}
	return max;
}
void CountSort(int a[],int n){
	int max = findmax(a,n);
	int i; int j;
	int *c;
	c = new int [max+1];
	for(i = 0; i<max+1; i++){
	   c[i]=0;	
	}
	for(i = 0; i< n; i++){
		c[a[i]]++;
	}
	
	i = 0; j = 0;
	while(i<max+1){
	      if(c[i]>0){
	      	a[j]=i;
	      	j++;
	      	c[i]--;
		  }	
		  else{
		  	i++;
		  }
	}
}
int main(){
	   int n;
	   n = 7;
	  int a[n]={3,2,10,9,7,8,6};
	  CountSort(a,n);
	  for(int i=0;i<n;i++){
	  	cout<<a[i]<<" ";
	  }
	  return 0;
	  }
