#include <iostream>
using namespace std;
int main(){
	int n,i,j,x,s,k,z;
	cin>>n;
	x=1;
	i=n;
	while(i<=n){
		s=n-i;
		for(k=1;k<=s;k=k+1){
			cout<<"  ";
		}
		z=1;
		j=i;
		while(j<=i){
			cout<<j<<' ';
			if(z<i+1){
				j=j-1;
			}
			else{
				j=j+1;
			}
			z=z+1;
		}
		if(x<n+1){
			i=i-1;
		}
		else{
			i=i+1;
		}
		x=x+1;
		cout<<endl;

	}
	cout<<endl;
	return 0;
}