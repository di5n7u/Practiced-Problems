#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	int f=1;
	cin>>n;
	
	for(i=1;i<=n;i=i+1){
		for(j=1;j<=i;j=j+1){
			cout<<f;
			f=f+1;
			if(j!=i){
				cout<<char(9);
			}
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}