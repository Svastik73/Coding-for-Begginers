 #include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
int t; cin>>t;
while(t--){
    int n; cin>>n;
    if(n/100==0) cout<<n%10<<endl;
    else
    {
    int sm=n%10;

    while(n!=0){

        if(n%10<sm) sm=n%10;
        n=n/10;


    }
    cout<<sm<<endl;


    }
}
}
