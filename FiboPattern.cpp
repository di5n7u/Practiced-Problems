#include <iostream>
using namespace std;
int main(){
	int n,f,i,c,j;
	int a=0;
	int b=1;
	cin>>n;
	for(i=1;i<=n;i=i+1){
		for(j=1;j<=i;j=j+1){
			if(i==1){
				cout<<a;
				c=a;
				f=c;
			}
			else if(i==2){
				cout<<b;
				c=b;
				b=b+f;
				f=c;
			}
			else{
				cout<<b;
				c=b;
				b=b+f;
				f=c;
			}
			if(i!=j){
				cout<<char(9);
			}
		}
		cout<<endl;
		
	}
	cout<<endl;
	return 0;
}

