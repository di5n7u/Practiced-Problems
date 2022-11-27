/*
Problem

Take N as input. Print Nth Fibonacci Number, given that the first two numbers in the Fibonacci Series are 0 and 1.

Input Format
Constraints
0 <= N <= 1000

Output Format
Sample Input
10
Sample Output
55

Explanation
The 0th fibonnaci is 0 and 1st fibonnaci is 1.
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	int n,a,b,i,f,c,r;
	r=0;
	a=0;
	f=a;
	b=1;
	cin>>n;
	for(i=0;i<=n-1;i=i+1){
		if(n==0){
			r=a;
			break;
		}
		else{
			r=b;
			c=b;
			b=b+f;
			f=c;

		}
	}
	cout<<r;

	cout<<endl;
	return 0;
}