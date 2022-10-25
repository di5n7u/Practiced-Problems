//Pattern InvertedHourGlass
#include <iostream>
using namespace std;
int main(){
	int n,x,z,i,j;
	cin>>n;
	z=1;
	i=n;
	while(i<=n){
		x=1;
		j=n;
		while(j<=n){
			if(j>=i){
				cout<<j<<' ';
			}
			else{
				cout<<"  ";
			}
			if(x<=n){
				j=j-1;
			}
			else{
				j=j+1;
			}
			x=x+1;

		}
		if(z<=n){
			i=i-1;
		}
		else{
			i=i+1;
		}
		z=z+1;
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
