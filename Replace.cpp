/*
Problem

Given a integer as a input and replace all the '0' with '5' in the integer

Input Format
Enter an integer n

Constraints
0<=n<=1000000000000

Output Format
All zeroes are replaced with 5

Sample Input
102
Sample Output
152

Explanation
Check each digit , if it is nonzero, then no change required but if it is zero then replace it by 5.
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	long n;
	long p=1, result=0;
	int r=0;
	cin>>n;
	if(n==0){
		cout<<5;
	}
	else{
		while(n>0){
			r=n%10;
			n=n/10;
			if(r==0){
				result=result+5*p;
			}
			else{
				result=result+r*p;
			}
			p=p*10;
		}
		cout<<result;
	}	
	cout<<endl;
	return 0;
}