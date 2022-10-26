#include <iostream>
using namespace std;
int main(){
	int n,i,r;
	int s1=0;
	int s2=0;
	i=1;
	cin>>n;
	while(n>0){
		r=n%10;
		n=n/10;
		if(i%2==0){
			s1=s1+r;
		}
		else{
			s2=s2+r;
		}
		i=i+1;
	}
	cout<<s2<<endl<<s1;	
	cout<<endl;
	return 0;
}