#include <iostream>
using namespace std;
int main(){
		int n,i,j,sp,k,c;
		cin>>n;
		sp=n-1;
		for(i=0;i<n;i=i+1){
			cout<<' ';
			for(k=1;k<=sp;k=k+1){
				cout<<'\t';
			}
			for(j=0;j<=i;j=j+1){
				if(j==0){
					c=1;
				}
				else{
					c=c*(i-j+1)/j;
				}
				cout<<c<<'\t'<<'\t';
	
			}
			sp=sp-1;
			cout<<endl<<endl;
		}
		cout<<endl;
		return 0;
}