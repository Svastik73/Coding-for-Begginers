#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
int main(){
 
 int n,one = 0, zero = 0;
    cin >> n;
    char str[n];
    cin >> str;
    for(int i = 0; i<n; i++) {
        if(str[i] == 'z')
            zero++;
            
        else if(str[i] == 'n')
            one++;
    }
    
    while(one--) cout << "1 ";
    while(zero--) cout << "0 ";
 
 
 
 
 
 
}
