//Hollow Rhombus Pattern
#include <iostream>
using namespace std;
int main(){
	int i,n,j;
	cin>>n;
	for(i=1;i<=n;i=i+1){
		for(j=1;j<=(n-i);j=j+1){
			cout<<' ';
		}
		if(j>(n-i)){
			for(j=1;j<=n;j=j+1){
				if(i==1 or i==n){
					cout<<'*';
				}
				else{
					if(j==1 or j==n){
						cout<<'*';
					}
					else{
						cout<<' ';
					}
				}
			}
		cout<<endl;

		}
	}
	cout<<endl;
	return 0;
}
