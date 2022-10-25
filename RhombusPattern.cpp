//Hollow Rhombus Pattern
#include <iostream>
using namespace std;
int main(){
	int n,i,j,s,no,c,k;
	int x=1;
	cin>>n;
	i=1;
	while(i>=1){
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
		if (x<n){
			i=i+1;
		}
		else{
			i=i-1;
		}
		x=x+1;

		cout<<endl;
	}
	cout<<endl;
	return 0;
}
