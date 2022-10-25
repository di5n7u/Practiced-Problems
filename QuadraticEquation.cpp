//Revising Quadratic Equations
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,d,r1,r2;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d<0){
		cout<<"Imaginary"<<endl;
	}
	else if(d>=0){
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		if(r1<r2){
			cout<<"Real and Distinct"<<endl;
			cout<<r1<<' '<<r2;
		}
		else if(r1>r2){
			cout<<"Real and Distinct"<<endl;
			cout<<r2<<' '<<r1;
		}
		else{
			cout<<"Real and Equal"<<endl;
			cout<<r1<<' '<<r2;
		}
	}
	cout<<endl;
	return 0;
}
