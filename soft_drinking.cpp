#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l,k,c,d,p,nl,np;
	cin>>n>>l>>k>>c>>d>>p>>nl>>np;
	int bottle = k*l;
	bottle = bottle/nl;
	int lime = c*d;
	int salt = p/np;
	int total_drinks = min(bottle,lime);
	total_drinks= min(total_drinks, salt);
	cout<< total_drinks/n<<endl;
}