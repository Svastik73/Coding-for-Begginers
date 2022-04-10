#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
     long long int n,x; cin>>n>>x;
     int dist=0;
     while(n--){
      char s; cin>>s;
     long long  int t; cin>>t;
      if(s=='+'){
       x=x+t;
      }
      else if(s=='-'&&x>=t){
       x=x-t;
 
      }
      else if(s=='-'&&x<t)
      {
       dist++;
 
      }
 
 
     }
     cout<<x<<" "<<dist<<endl;
 
 
 
 
 
 
}
