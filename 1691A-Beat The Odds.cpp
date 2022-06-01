#include <iostream>
using namespace std;
 
int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n];
	 int ev=0,od=0;
	    for(int i=0;i<n;i++){ 
	 
	    	cin>>arr[i];
	    	if(arr[i]%2==0) ev++;
	    	else od++;
	   }
	   if(od<ev) cout<<od<<endl;
	   else cout<<ev<<endl;
	   
	}
}
