#include<stdio.h>    
#include<stdlib.h>  
 
#include<string.h>
 
 
int main(){  
int n; scanf("%d",&n);
while(n--){
long long int s,a,b,c;
scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
long long int paid=s/c;
 
long long int fre=paid/a*b;
 
printf("%lld\n",paid+fre);
 
 
 
  
}
 
 
}
