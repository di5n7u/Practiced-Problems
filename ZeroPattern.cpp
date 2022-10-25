//Pattern with Zeros
#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i=i+1){
		for(j=1;j<=i;j=j+1){
			if(j==1 or j==i){
				cout<<i;
			}
			else{
				cout<<0;
			}
			if(j!=i){
				cout<<char(9);
			}
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
