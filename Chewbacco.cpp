/*
Problem

Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input Format
The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.

Constraints
x <= 100000000000000000

Output Format
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

Sample Input
4545
Sample Output
4444

Explanation
There are many numbers form after inverting the digit. For minimum number, check if inverting digit is less than or greater than the original digit. If it is less, then invert it otherwise leave it.
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	long n;
	long p=1, result=0;
	int r=0;
	cin>>n;
	while(n>0){
		r=n%10;
		n=n/10;
		if(9-r<r){
			result=result+(9-r)*p;
		}
		else{
			result=result+(r)*p;
		}
		if(n==0){
			if(9-r==0){
				result=result+(r)*p;
			}
			else if(r==0){
				result=result+(9-r)*p;
			}
		}
		p=p*10;
	}
	cout<<result;

	cout<<endl;
	return 0;
}