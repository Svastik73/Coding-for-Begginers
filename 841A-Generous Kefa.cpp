#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
typedef long long ll;
int main(){
    
int n,m;
cin>>n>>m;
char arr[n];
for(int i=0;i<n;i++) cin>>arr[i];

sort(arr,arr+n);       // Here sort the character array!! so tha alternate alphabets are grouped together!


int i=0; int cou=1; int flg=0;
while(i<n-1){
    if(arr[i]==arr[i+1]) cou++;
    else{ 
        cou=1;
    
        
    }
    if(cou>m){
        flg=1;
        cout<<"NO";
        break;
    }
    i++;
    
    

    
}
if(flg==0) cout<<"YES";
}
