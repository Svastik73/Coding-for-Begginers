#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
#include<cstdlib>
#include<cmath>
using namespace std;
                          
                         //USA USA !!
int main(){
int t; cin>>t;
while(t--){
    int a; cin>>a;
    long long int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    sort(arr,arr+a);
    long long int sum=arr[a-2]+arr[a-1];
    cout<<sum<<endl;
    
    
}
    
}
