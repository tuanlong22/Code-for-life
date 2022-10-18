#include<bits/stdc++.h>
using namespace std;
int bin_search(vector<int> arr, int n){
   int s  = 0;
   int e = arr.size()-1;
   while(s<=e){
       int m = (s+e)/2;
      if(arr[m]>n){
         e = m - 1;
      }
      else if(arr[m]<n){
         s = m + 1;
      }
      else{
         return m;
      }
   }
   return -1;
}
int lower_bound(vector<int> arr, int n){
   int s = 0;
   int e = arr.size()-1;
   int ans;
   while(s<=e){
      int mid = (s+e)/2;
     if(arr[mid]==n){
          e= mid - 1;
          ans = mid;
     }
     else if(arr[mid]>n){
      e = mid - 1;
     }
     else{
      s = mid + 1;
     }
   }
   return ans;
}
int upper_bound(vector<int> arr, int n){
   int s = 0;
   int e = arr.size()-1;
   int ans;
   while(s<=e){
      int mid = (s+e)/2;
      if(arr[mid] == n){
         s = mid + 1;
         ans = mid;
      }
      else if(arr[mid]>n){
          e = mid - 1;
     }
     else{
      s = mid + 1;
     }
      }
 return ans;
   }
int main() {
    int n;
    cin >> n;
    vector<int> arr={2,4,7,9,11,15,17,20,21};
    vector<int> orr={0,1,1,1,2,2,3,3,3,3,4,4,4};
  // cout<< bin_search(arr,n);
   cout<<upper_bound(orr,n)-lower_bound(orr,n)+1;
    return 0;
}