/*
Problem

A Boston number is a composite number, the sum of whose digits is the sum of the digits of its prime factors obtained as a result of prime factorization (excluding 1 ). The first few such numbers are 4,22 ,27 ,58 ,85 ,94 and 121 . For example, 378 = 2 × 3 × 3 × 3 × 7 is a Boston number since 3 + 7 + 8 = 2 + 3 + 3 + 3 + 7. Write a program to check whether a given integer is a Boston number.

Input Format
There will be only one line of input:N , the number which needs to be checked.

Constraints
1 < N < 2,147,483,647 (max value of an integer of the size of 4 bytes)

Output Format
1 if the number is a Boston number. 0 if the number is a not Boston number.

Sample Input
378
Sample Output
1

Explanation
Self Explanatory
*/

//Solution

#include<iostream>
using namespace std;
bool boston(int n){
	int r=0,f=0,s=0,k=0,d=0;
	f=n;
	while(n>0){
		r=n%10;
		n=n/10;
		s=s+r;
	}
	n=f;
	r=2;
	while(n>1 and r<=n){
		if(n%r==0 and r!=f ){
			n=n/r;
			d=r;
			while(d>0){
				k=k+d%10;
				d=d/10;
			}
		}
		else{
			r=r+1;
		}
	}
	if(k==s){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n;
	cin>>n;
	cout<<boston(n)<<endl;
	return 0;
}