/*
Problem

Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the LCM of N1 and N2. Print the value returned.

Input Format
Constraints
0 < N1 < 1000000000
0 < N2 < 1000000000

Output Format
Sample Input
4 
6
Sample Output
12

Explanation
The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	int n1,n2,i;
	i=1;
	cin>>n1;
	cin>>n2;
	while(1){
		if(i%n1==0 and i%n2==0){
			cout<<i;
			break;
		}
		i=i+1;
	}
	cout<<endl;
	return 0;
}