#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t; cin>>t;
  while(t--){
      int n; cin>>n;
      int arr[n];
      int arr1[n];
      for(int i=0;i<n;i++) cin>>arr[i];
      int dif=0;       bool flg=true;
   for(int i=0;i<n;i++){
       cin>>arr1[i];
    if(arr[i]-arr1[i]<0) flg=false;
    else if(arr[i]-arr1[i]>dif) dif=arr[i]-arr1[i];
   }
if(flg==false) cout<<"NO\n";
else
{
    for(int i=0;i<n;i++){
        if((arr[i]-arr1[i])!=dif){
            if(arr1[i]!=0){
                cout<<"NO\n";
                flg=false;
                break;
            } 
        }
    }
    if(flg==true) cout<<"YES\n";

} 
  }
}
