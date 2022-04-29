#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
int t; cin>>t;

while(t--){
 int n,x; cin>>n>>x;
 if(n==1||n==2) cout<<1<<endl;
 else
 {
  int flg=0;
  int i=1;
  while(flg!=1){
   if((n>=(i-1)*x+3)&&(n<=i*x+2)){
    cout<<i+1<<endl;
    
    
    flg=1;
    break;
   }
   else
   {
    i++;
   }
  }
  
  
  
  
 }
 
 
 
 
}
}
