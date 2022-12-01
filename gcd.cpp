/*
Problem

Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the GCD of N1 and N2. Print the value returned.

Input Format
Two integers seperated by a new line.

Constraints
0 < N1 < 1000000000
0 < N2 < 1000000000

Output Format
Output a single integer which is the GCD of the given integers.

Sample Input
16 
24
Sample Output
8

Explanation
The largest number that divides both N1 and N2 is called the GCD of N1 and N2.
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	int n1,n2,l;
	int r=1;
	l=1;
	cin>>n1;
	cin>>n2;
	while(l<=n1 and l<=n2){
		if(n1%l==0 and n2%l==0){
			r=l;
		}
		l=l+1;
	}
	cout<<r;
	cout<<endl;
	return 0;
}