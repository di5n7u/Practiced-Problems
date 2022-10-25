//Pattern Triangle
#include <iostream>
using namespace std;
int main(){
	int n,i,j,s,no,c,k;
	cin>>n;
	for(i=1;i<=n;i=i+1){
		no=2*i-1;
		s=n-i;
		j=1;
		c=i;
		k=i;
		while(j<=(no+s)){
			if(j<=s){
				cout<<'\t';
				j=j+1;
				continue;
			}
			else if(j>s){
				cout<<c<<'\t';
			}
			if(k>=no){
				c=c-1;
			}
			else if (k<no){
				c=c+1;
			}
			k=k+1;
			j=j+1;
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
