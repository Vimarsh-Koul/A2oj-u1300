#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	string temp="";
	for(int i=0;i<s.length();i++){
		if(s[i]=='.')
			temp+='0';
		else if(s[i]=='-'){

			if(s[i+1]=='.')
				temp+='1';
			else
				temp+='2';
			i++;
		}
	}

	cout<<temp<<endl;
}