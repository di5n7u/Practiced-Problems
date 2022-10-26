#include <iostream>
using namespace std;
int main(){
	char ch;
	int n1,n2;
	do{
		cin>>ch;
		switch(ch){
			case'x':
			case'X':
			break;
			case'+':
				cin>>n1;
				cin>>n2;
				cout<<n1+n2<<endl;
				break;
			case'-':
				cin>>n1;
				cin>>n2;
				cout<<n1-n2<<endl;
				break;
			case'/':
				cin>>n1;
				cin>>n2;
				cout<<n1/n2<<endl;
				break;
			case'%':
				cin>>n1;
				cin>>n2;
				cout<<n1%n2<<endl;
				break;
			case'*':
				cin>>n1;
				cin>>n2;
				cout<<n1*n2<<endl;
				break;
			default:
				cout<< "Invalid operation. Try again."<<endl;
		}
	}while(ch!='X' and ch!='x');
	cout<<endl;
	return 0;
}