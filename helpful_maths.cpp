#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	if(s==""){
		cout<<0<<endl;
	}

	vector<int> v;
	
	for(int i=0;i<s.length();i+=2)
		v.push_back(s[i]-'0');

	// for(auto it:v)
	// 	cout<<it<<" ";
	// cout<<endl;

	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		if(i==v.size()-1){
			cout<<v[i]<<endl;
		}
		else
			cout<<v[i]<<"+";
	}
	return 0;
}