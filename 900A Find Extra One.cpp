#include<iostream>
 
#include<bits/stdc++.h>
#define in cin
#define ou cout
using namespace std;
 
int main(){
int t; in>>t;
int po=0; int neg=0; int flg=0;
 
while(t--){
    int x,y; in>>x>>y;
    if(x>0) po++;
    else neg++;
    if(neg>=2&&po>=2) {
 
        flg=1;
 
    }
}
if(flg==0) cout<<"Yes\n";
 
else cout<<"No\n";
 
}
