#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){ 
 
 
 int t; cin>>t;
 while(t--){
  int n,m,r,c;  cin>>n>>m>>r>>c;
  char arr[n][m];
  int flg=0;
  for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
    cin>>arr[i][j];                                //TBR: index of array start from '0'
                                                   //so subtract '1' from 'r' and 'c'
    if(arr[i][j]=='B'&&flg<=1) flg++;
   }
  }
  
  
  if(flg==0) cout<<-1<<endl;
  else if(arr[r-1][c-1]=='B') cout<<0<<endl;
  else
  {
   int f=0;
   for(int i=0;i<n;i++){
    if(arr[i][c-1]=='B'){ 
     f++;
   
     break;
    }
   }
   for(int i=0;i<m;i++){
    if(arr[r-1][i]=='B'){ 
     f++;
   
     break;
    }
  }
  if(f>0) cout<<1<<endl;
  else cout<<2<<endl;
  }
  
  
  
  
 }
 
 
 
 
 
 
 
 
}
