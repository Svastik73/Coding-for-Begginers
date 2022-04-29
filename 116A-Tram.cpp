#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
 
int t; cin>>t;
int sum=0;
int lar=0;
while(--t){
    
    int a,b; cin>>a>>b;
    sum=sum+b-a;
    if(sum>lar) lar=sum;
    
    
}
  cout<<lar<<endl;
  
  
    
    
    
}
