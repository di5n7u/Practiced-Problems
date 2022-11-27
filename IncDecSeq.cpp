/*
Problem

Given an array S of size N , check if it is possible to split sequence into two sequences -
s1 to si and si to sN such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.

Input Format
First line contains a single integer N denoting the size of the input.
Next N lines contain a single integer each denoting the elements of the array S.

Constraints
0 < N < 1000 Each number in sequence S is > 0 and < 1000000000

Output Format
Print boolean output - "true" or "false" defining whether the sequence is increasing - decreasing or not.

Sample Input
5 
1 
2 
3 
4 
5
Sample Output
true

Explanation
Carefully read the conditions to judge which all sequences may be valid. Don't use arrays or lists.
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	int n,no,i,l,s,z;
	l=0;
	s=0;
	z=0;
	cin>>no;
	for(i=0;i<no;i=i+1){
		cin>>n;
		if(i==0){
			s=n;
		}
		else{
			if(n<s){
				s=n;
				if(l==1){
					z=1;
				}
			}
			else if(n>s){
				l=1;
				s=n;
			}
			else{
				z=1;
				s=n;
			}
		}
	}
	if(z==1){
		cout<<"false";
	}
	else{
		cout<<"true";
	}

		
	cout<<endl;
	return 0;
}