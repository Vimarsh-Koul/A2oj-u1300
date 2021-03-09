#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	set<int> s;
	cin >> x;
	s.insert(x);
	cin >> x;
	s.insert(x);
	cin >> x;
	s.insert(x);
	cin >> x;
	s.insert(x);
	// cout<<abs(s.size()-4)<<endl;
	int ans = abs(int(s.size()-4));
	cout << ans<<endl;
}