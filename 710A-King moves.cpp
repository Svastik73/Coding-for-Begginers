#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){

    
    char arr[2];
    cin>>arr;
    if((arr[0]=='a'&&(arr[1]=='1'||arr[1]=='8'))||(arr[0]=='h'&&(arr[1]=='1'||arr[1]=='8'))) cout<<3;
    else if(arr[0]=='a'||arr[0]=='h'||arr[1]=='1'||arr[1]=='8') cout<<5;
    else cout<<8;
    
    
    
        
    
}
