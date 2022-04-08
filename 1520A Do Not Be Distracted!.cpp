#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
 
 
  int main() {
 int T;
 
  cin >> T;
  while(T--){
   int n; cin>>n;
   char arr[n];
   cin>>arr;
   int tree=0;
   for(int i=0;i<n;i++){
       int flg=0;int lab;
       if(arr[i]!=arr[i+1]){
           lab=i+1;
           for(int j=lab;j<n;j++){
               if(arr[i]==arr[j]){
                   cout<<"NO"<<endl;
                   tree=1;
                 flg=1;
                   break;
                   
                 
               }
           }
       }
       if(flg==1) break;
   }
   
   
   if(tree==0){
       cout<<"YES"<<endl;
       
   }
   
  }
  
  
 
}
