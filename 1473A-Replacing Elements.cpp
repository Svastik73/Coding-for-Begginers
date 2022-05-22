#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
 
using namespace std;
 
int main(){
 
	int t; cin>>t;
 
    while(t--){
     int n,b;
     cin>>n>>b;
     int arr[n];
     int c=0;
     for(int i=0;i<n;i++){
     	cin>>arr[i];
     if(arr[i]<=b) c++;
     }
     int flg=1;
     for(int i=0;i<n-1;i++){
     	for(int j=i+1;j<n;j++){
     		if(arr[i]+arr[j]<=b){
     			cout<<"YES\n";
     			flg=0;
     			break;
     		}
     	}
     	if(flg==0) break;
 
     }
        	if(flg==1&&c<n) cout<<"NO\n";
        	else if(flg==1&&c==n) cout<<"YES\n";
 
 
 
    }
 
 
 
 
 
 
 
 
 
 
}
