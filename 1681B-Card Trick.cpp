#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a; cin>>a;
        int arr[a];
        for(int i=0;i<a;i++) cin>>arr[i];
        int b; cin>>b;
         int arr1[b];
        for(int i=0;i<b;i++) cin>>arr1[i];
       int istep=0;
       int mar=0;
        while(istep<b){
           if(mar+arr1[istep]>=a){
              mar=arr1[istep]-(a-1-mar)-1;
           }
          else{
              mar=mar+arr1[istep];
          }    
            istep++;
         }
 cout<<arr[mar]<<endl;
     }
 }
