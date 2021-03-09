#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int x;
	vector<int> temp;
	for(int i=0;i<n;i++){
		cin>>x;
		temp.push_back(x);
	}

	int minper = temp[0];
	int maxper=temp[0];
	int ans=0;
	for(int i=1;i<n;i++){
		if(temp[i]<minper){
			ans++;
			minper=temp[i]; 
		}

		else if(temp[i]>maxper){
			ans++;
			maxper= temp[i];
		}
	}

	cout<<ans<<endl;

}