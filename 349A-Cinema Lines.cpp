#include<iostream>
#include<cstring>
#include<cmath>                        
using namespace std;
int main(){                                      
int n;                               //USA USA!
cin>>n;
int cap[n];
for(int i=0;i<n;i++){
    cin>>cap[i];
}
  int t25=0,t50=0;
  int cou=0;
  for(int i=0;i<n;i++){
      if(cap[i]==25){
          t25++;
          cou++;
          
      }
      else if(cap[i]==50&&t25>=1){
          cou++;
          t50++;
          t25--;
      }
      else if(cap[i]==100&&t50>=1&&t25>=1){
          cou++;
          t25--;
          t50--;
      }
      else if(cap[i]==100&&t25>=3){
          cou++;
          t25-=3;
      }
      
      else
      {
          cout<<"NO";
          break;
      }
  }
  if(cou==n){
      cout<<"YES";
  }
}
