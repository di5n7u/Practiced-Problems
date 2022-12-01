/*
Problem

Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.

Input Format
The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.

Constraints
N<=1000 Digits in binary representation is <=16.

Output Format
N lines,each containing a decimal equivalent of the binary number.

Sample Input
4
101
1111
00110
111111
Sample Output
5
15
6
63
Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.
*/

//Solution

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int no,r,n,x,i,s;
	cin>>n;
	for(x=0;x<n;x=x+1){
		s=0;
		i=0;
		cin>>no;
		while(no>0){
			r=no%10;
			no=no/10;
			s=s+r*(pow(2,i));
			i=i+1;
		}
		cout<<s<<endl;
		
	}
	
	cout<<endl;
	return 0;
}