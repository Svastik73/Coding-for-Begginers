#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long
 
int main(){
 
    int t; cin>>t;
    while(t--){
          int n; cin>>n;
          char s[n]; cin>>s;
 
 
          if(n%2!=0){
          int c=1;
          int i=n/2;
          while(s[i]==s[i+1]){
              c+=2;
              i++;
          }
          cout<<c<<endl;
 
 
          }
          else
          {
 
            int c1=2;
            int i=n/2;
            while(s[i]==s[i+1]){
              c1+=2;
              i++;
                 }
                 cout<<c1<<endl;
 
          }
 
    }
}
