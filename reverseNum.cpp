/*
Problem

Take N as input, Calculate it's reverse also Print the reverse.

Input Format
Constraints
0 <= N <= 1000000000

Output Format
Sample Input
123456789
Sample Output
987654321

Explanation
You've to calculate the reverse in a number, not just print the reverse.
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	int n,i,r,s;
	i=0;
	s=0;
	cin>>n;
	while(n>0){
		r=n%10;
		n=n/10;
		s=r+s*10;
		i=i+1;
	}
	cout<<s<<endl;
	return 0;
}