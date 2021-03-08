#include<bits/stdc++.h>
using namespace std;

bool isprime(int num){
	if(num==1)
		return false;
	else if(num==2)
		return true;
	for(int i=2;i*i<=num;i++){
		if(num%i==0)
			return false;
	}

	return true;
}

int main(){
	int x,y;cin>>x;cin>>y;

	for(int i=x+1;i<y;i++){
		if(i<y && isprime(i)){

			cout<<"NO"<<endl;
			return 0;
		}
	}

	if(isprime(y))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}