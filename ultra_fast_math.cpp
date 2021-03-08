#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	string n0,n1;
	cin >>n0>>n1;
	string ans="";
	
	// cout<<n0<<" "<<n1<<endl;

	for(int i=0;i<n0.length();i++){
		if(n0[i]=='0')
			ans+=n1[i];
		else if(n1[i]=='0')
			ans+=n0[i];
		else if(n0[i]=='1' && n1[i]=='1')
			ans+='0';
	}
	
	cout<<ans<<endl;
}