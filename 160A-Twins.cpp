#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
 int main(){
 int n; cin>>n;
 int arr[n];
 int s=0;
 for(int i=0;i<n;i++){
  cin>>arr[i];
   s=s+arr[i];
 }
       sort(arr,arr+n);
       int test=0,count=0;
       for(int i=n-1;i>=0;i--){
        if(test<=s/2){
         test=test+arr[i];
         count++;
        }
       }
       cout<<count;
       
   
       
       
       
       
  
      
 }
