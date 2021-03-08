#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n;cin>>n;
	ll count=0;
	while(n>0){
		ll rem = n%10;
		n/=10;
		if(rem==4 || rem==7)
			count++;
	}

	if(count==4 || count==7)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}