#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int x,y;
	int l0,l1,r0,r1;
	l0=l1=r0=r1=0;

	for(int i=0;i<n;i++){
		cin>>x>>y;
		if(x==0)
			l0++;
		else
			l1++;
		if(y==0)
			r0++;
		else
			r1++;
	}

	int ans=0;
	ans+=min(l0,l1);
	ans+=min(r0,r1);
	cout<<ans<<endl;
}