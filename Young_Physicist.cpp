#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<tuple<int,int,int>> ans;
	int a,b,c;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		ans.push_back(make_tuple(a,b,c));
	}

	int x,y,z;
	x=y=z=0;

	for(int i=0;i<ans.size();i++){
		x+= get<0>(ans[i]);
		y+= get<1>(ans[i]);
		z+= get<2>(ans[i]);
	}

	if(x==0 && y==0 && z==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}