#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;cin>>n;
	vector<int> v;
	for (int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	int minval,maxval,pmax, pmin;
	minval=maxval=0;
	pmax=pmin=0;
	minval = INT_MAX;
	for(int i=0;i<n;i++){
		if(v[i]>maxval){
			pmax =i;
			maxval=v[i];
		}
	}

	for (int i=0;i<n;i++){
		if(v[i]<minval){
			minval= v[i];
			pmin=i;
		}
		else if(v[i]==minval)
			pmin=i;
	}

	int sec = pmax + (v.size()-pmin-1);
	if(pmin<pmax)
		sec-=1;
	cout<<sec<<endl;
}