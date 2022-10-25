//Pattern DoubleSidedArrow
#include <iostream>
using namespace std;
int main(){
	int n,i,j,x,z,sp,k;
	cin>>n;
	z=1;
	i=1;
	sp=n-1;
	while(i>=1){
		for(k=1;k<=sp;k=k+1){
			cout<<"  ";
		}
		j=i;
		x=1;
		while(j<=i){
			if(j>=1){
				cout<<j<<' ';
			}
			else{
				cout<<"  ";
			}
			if(x<2*i-1){
				j=j-1;
			}
			else{
				j=j+1;
			}
			x=x+1;
		}
		if(z<=n/2){
			i=i+1;
			sp=sp-2;
		}
		else{
			i=i-1;
			sp=sp+2;
		}
		z=z+1;
		cout<<endl;

	}

	cout<<endl;
	return 0;
}
