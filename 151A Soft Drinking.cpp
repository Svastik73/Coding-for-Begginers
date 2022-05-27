
#include<iostream>
 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n,k,l,c,d,p,nl,np; cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int li=(l*k)/nl;
if(li<p/np){
    if(d*c<li) cout<<(d*c)/n<<endl;
    else cout<<li/n<<endl;
}
else
{
    if(d*c<p/np) cout<<(d*c)/n<<endl;
    else cout<<(p/np)/n<<endl;
    
}
 
}
