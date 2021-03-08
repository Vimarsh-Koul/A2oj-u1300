#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	string temp = s;
	transform(temp.begin(),temp.end(),temp.begin(), ::tolower);

	int countl =0;

	for(int i=0;i<s.length();i++){
		if(s[i]==temp[i])
			countl++;
	}

	if(countl>=(s.length()-countl))
		cout<<temp<<endl;
	else{
		transform(temp.begin(),temp.end(),temp.begin(), ::toupper);
		cout<<temp<<endl;
	}
}