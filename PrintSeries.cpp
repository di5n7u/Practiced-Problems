#include<iostream>
using namespace std;
int main(){
	int n1,n2,n,s,i;
	n=1;
	cin>>n1;
	cin>>n2;
	i=n1;
	while(i>0){
		s=3*n+2;
		if(s%n2==0){
			n=n+1;
			continue;
		}
		n=n+1;
		i=i-1;
		cout<<s<<endl;
	}
	cout<<endl;
	return 0;
}