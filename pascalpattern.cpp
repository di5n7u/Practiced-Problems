// Pascal Triangle(Pattern 3)
#include <iostream>
using namespace std;
int main(){
	int i,j,n,c;
	cin>>n;
	for(i=0;i<n;i=i+1){
		for(j=0;j<=i;j=j+1){
			if(j==0){
				c=1;
			}
			else{
				c=c*(i-j+1)/j;
			}
			cout<<c<<'\t';
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
