/*
Problem

Take the following as input.

A number
Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is defined as follows.

A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.

abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….

1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3

Input Format
Single line input containing an integer

Constraints
0 < N < 1000000000

Output Format
Print boolean output for each testcase.
"true" if the given number is an Armstrong Number, else print "false".

Sample Input
371
Sample Output
true

Explanation
Use functions. Write a function to get check if the number is armstrong number or not. Numbers are armstrong if it is equal to sum of each digit raised to the power of number of digits.
*/

//Solution

#include<iostream>
using namespace std;
int power(int base,int p){
	int i, result=1;
	for(i=0;i<p;i++){
		result= result*base;
	}
	return result;
}
int lenint(int n){
	int l=0;
	while(n>0){
		n=n/10;
		l=l+1;
	}
	return l;
}
string armstrong(int n){
	int r=0,k=0,f;
	f=n;
	while(n>0){
		r=n%10;
		n=n/10;
		k=k+power(r,lenint(f));
	}
	if(f==k){
		return"true";
	}
	else{
		return"false";
	}
}
int main(){
	int n;
	cin>>n;
	cout<<armstrong(n);
	cout<<endl;
	return 0;
}