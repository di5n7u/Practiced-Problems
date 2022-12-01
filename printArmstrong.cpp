/*
Problem

Take the following as input.

A number (N1)
A number (N2)
Write a function which prints all armstrong numbers between N1 and N2 (inclusive).

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3

Input Format
Constraints
0 < N1 < 100 N1 < N2 < 10000

Output Format
Sample Input
400
1000
Sample Output
407

Explanation
Each number in output is in separate line.
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
void printarmstrong(int n1,int n2){
	int i;
	for(i=n1;i<=n2;i++){
		if(armstrong(i)=="true"){
			cout<<i<<endl;
		}
		else{
			;
		}
	}
}

int main(){
	int n1,n2;
	cin>>n1>>n2;
	printarmstrong(n1,n2);
	cout<<endl;
	return 0;
}