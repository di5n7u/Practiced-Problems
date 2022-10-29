/*
Problem

Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
63
Sample Output
77

Explanation
Both input and output are integers
*/

//Solution

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	int i=0;
	int r=0;
	int s=0;
	cin>>n;
	while(n>0){
		r=n%8;
		n=n/8;
		s=s+r*(pow(10,i));
		i=i+1;
	}

	cout<<s<<endl;
	return 0;
}