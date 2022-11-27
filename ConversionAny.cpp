/*
Problem

Take sb (source number system base), db (destination number system base) and sn (number in source format). Write a function that converts sn to its counterpart in destination number system. Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
8
2 
33
Sample Output
11011

Explanation
All input output is as integers and in separate lines.
*/

//Solution

#include<iostream>
using namespace std;
int convert_to_decimal(int n,int base){
	int r=0,k=0,p=1;
	while(n>0){
		r=n%10;
		n=n/10;
		k=k+r*p;
		p=p*base;
	}
	return k;
}
int convert_to_any(int n,int base, int convertbase){
	int decimal=convert_to_decimal(n,base),r=0,k=0,p=1;
	while(decimal>0){
		r=decimal%convertbase;
		decimal=decimal/convertbase;
		k=k+r*p;
		p=p*10;
	}
	return k;
}
int main(){
	int n,base,convertbase;
	cin>>base>>convertbase>>n;
	cout<<convert_to_any(n,base,convertbase)<<endl;
	return 0;
}