//Check prime
#include <iostream>
using namespace std;
int main(){
	int n,f,i;
	f=0;
	cin>>n; //2<n<=1000000000
	for(i=2;i<n;i=i+1){
		if(n%i==0){
			f=1;
			break;

		}
	}
	if(f==1){
		cout<<"Not Prime";
	}
	else{
		cout<<"Prime";
	}
	cout<<endl;
	return 0;
}
