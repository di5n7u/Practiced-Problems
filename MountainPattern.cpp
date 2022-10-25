//Pattern Mountain
#include <iostream>
using namespace std;
int main(){
	int i,n,j,x;
	cin>>n;
	for(i=1;i<=n;i=i+1){
		j=1;
		x=1;
		while(j>=1){
			if(j<=i){
				cout<<j<<'\t';
			}
			else{
				cout<<'\t';
			}
			if(x<n){
				j=j+1;
			}
			else{
				j=j-1;
			}
			x=x+1;
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
