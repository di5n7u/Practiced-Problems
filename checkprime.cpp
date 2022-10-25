/*
Problem

Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

Input Format
Constraints
2 < N <= 1000000000

Output Format
Sample Input
3
Sample Output
Prime
Explanation
The output is case specific
*/

//Solution

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
