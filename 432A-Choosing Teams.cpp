#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
typedef long long ll;
int main(){

   int n,k; cin>>n>>k;
   int arr[n];
int count=0;
   for(int i=0;i<n;i++){
       
   cin>>arr[i];
if(arr[i]+k<=5) count++;
}
cout<<count/3;


}
