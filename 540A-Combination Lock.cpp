#include <iostream>
#include <bits/stdc++.h>
using namespace std;
                   //USA USA USA AMERICA !!!!!!!!! AMERICA
int main(void)
{
int n; cin>>n;
char s[n];char s1[n];
for(int i=0;i<n;i++) cin>>s[i];
for(int i=0;i<n;i++) cin>>s1[i];
int surrey=0;
for(int i=0;i<n;i++){
  if(abs((int)s[i]-(int)s1[i])<10-abs((int)s[i]-(int)s1[i])) surrey=surrey+abs((int)s[i]-(int)s1[i]);
  else surrey=surrey+10-abs((int)s[i]-(int)s1[i]);

}
cout<<surrey<<endl;



}
