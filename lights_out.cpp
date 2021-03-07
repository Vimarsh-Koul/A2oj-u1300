#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3][3],temp[3][3];

for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			a[i][j]=1;


	for(int i=0;i<3;i++){

		for(int j=0;j<3;j++){

			cin>>temp[i][j];

			if(temp[i][j]%2 == 1){
				if(a[i][j])
					a[i][j]=0;else a[i][j]=1;

				if(i!=0)
					if(a[i-1][j]) a[i-1][j]=0; else a[i-1][j] = 1;
				if(i!=2)
					if(a[i+1][j]) a[i+1][j]=0; else a[i+1][j] = 1;
				if(j!=0)
					if(a[i][j-1]) a[i][j-1]=0; else a[i][j-1] = 1;
				if(j!=2)
					if(a[i][j+1]) a[i][j+1]=0; else a[i][j+1] = 1;
			}
		}
	}

	for(int i=0;i<3;i++){

		for(int j=0;j<3;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
}