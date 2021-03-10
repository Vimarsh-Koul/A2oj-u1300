#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	unordered_map<char, int> map;
	for(auto it: s){
		map[it]++;
	}

	if(map.size()%2==1)
		cout<<"IGNORE HIM!"<<endl;
	else
		cout<< "CHAT WITH HER!"<<endl;
}