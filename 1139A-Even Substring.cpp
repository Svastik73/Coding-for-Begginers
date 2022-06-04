#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t; cin>>t;  char s[t]; cin>>s;

  long long int c=0;
  for(int i=0;i<t;i++){
      if(s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='0')c=c+(i+1);
  }
  cout<<c<<endl;


}
