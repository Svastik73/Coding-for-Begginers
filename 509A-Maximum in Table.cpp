#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
#include<cstdlib>
#include<cmath>
using namespace std;
 
int main(){
  int t; cin>>t;
                                     //USA ! USA! USA!
int arr[t][t];
for(int i=0;i<t;i++){
    arr[0][i]=1;
    arr[i][0]=1;
}
for(int j=1;j<t;j++){
for(int i=1;i<t;i++){
    arr[j][i]=arr[j][i-1]+arr[j-1][i];
}
}
cout<<arr[t-1][t-1];
 
 
 
 
}
