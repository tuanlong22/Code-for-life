#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int a[],int n){
	
	for(int i=0;i<n-1;i++){
		int min_index = i;
		for(int j = i+1; j<n; j++){
			if(a[j]<a[min_index]){
				min_index =  j;
			}
		}
		swap(a[min_index],a[i]);
	}
}
int main() {
	int n;
	n = 6;
	int a[6]={64,25,12,32,19,11};
	SelectionSort(a,n);
	for(int i =0 ;i < n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
