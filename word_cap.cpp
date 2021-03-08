#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	char ch = s[0];
	if(islower(ch)){
		s[0]= toupper(ch);
	}

	cout<<s<<endl;
}