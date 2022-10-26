/*
Problem

Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
101010
Sample Output
42

Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.
*/

//Solution

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,r;
	int i=0;
	int s=0;
	cin>>n;
	while(n>0){
		r=n%10;
		n=n/10;
		s=s+r*(pow(2,i));
		i=i+1;
	}
	cout<<s<<endl;
	return 0;
}