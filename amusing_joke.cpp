#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c;cin>>a>>b>>c;
	unordered_map<char,int> map;
	for(auto it: c)
		map[it]++;

	for(int i=0;i<a.length();i++){
		if(map[a[i]])
			map[a[i]]--;
		else{
			cout<<"NO"<<endl;
			return 0;
		}
	}

	for(int i=0;i<b.length();i++){
		if(map[b[i]])
			map[b[i]]--;
		else{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	for(auto it: map){
		if(it.second>0){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;

}