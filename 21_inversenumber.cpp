#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,r,i,s;
	s=0;
	i=1;
	cin>>n;
	while(n>0){
		r=n%10;
		n=n/10;
		s=(pow(10,r-1)*i)+s;
		i=i+1;

	}
	cout<<s;
	cout<<endl;
	return 0;
}