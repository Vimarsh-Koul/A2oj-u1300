#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int x,y;
	cin>>x>>y;
	int temp = y,ans=y;
	for(int i=1;i<n;i++){
		cin>>x>>y;
		temp = temp-x+y;
		if(temp>ans)
			ans=temp;
	}
	cout<<ans<<endl;
}