#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t; cin>>t;
  while(t--){
      int n; cin>>n;
      int le=n-6;
      if(le%3==0){
          cout<<2+le/3<<" "<<3+le/3<<" "<<1+le/3<<endl;
      }
      else if(le%3==1) cout<<2+le/3<<" "<<3+(le/3) + 1<<" "<<1+le/3<<endl;
      else if(le%3==2) cout<<2+le/3+1<<" "<<3+(le/3) +1<<" "<<1+le/3<<endl;
 
  }
}
