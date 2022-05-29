#include<stdio.h>
#include<stdlib.h>
int main(){
int t; scanf("%d",&t);
while(t--){
int n; scanf("%d",&n);  int m; scanf("%d",&m);
long long int t=n*m;
if(t%2==0){
    long long int tot;
if((n%2==0&&m%2==0)||n%2!=0)  tot=n*(m/2);
else if(m%2!=0){
    tot=n*(m/2)+n/2;
}
printf("%lld\n",tot);
}
else
{
    long long  int tot=n*(m/2);
    tot=tot+n/2+1;
    printf("%lld\n",tot);
}
}
}
