#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
     int tc;  cin >> tc;
     while (tc--) {
 int n; cin>>n;
 
 int arr[n];
 for(int i=0;i<n;i++){
  cin>>arr[i];
  
 }
 sort(arr,arr+n);
 int f=0;
 for(int i=0;i<n-1;i++){
  if(arr[i+1]-arr[i]>1&&n!=1){
   f=1;
   cout<<"NO"<<endl;
   break;
  }
 }
  if(f==0||n==1) cout<<"YES"<<endl;
 
      
      
     }
}
