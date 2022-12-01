/*
Problem

Given a number N (denoting one of the legs of the triangle), Print its Pythagoras pair in increasing order if they exist. Otherwise, print "-1".

Input Format
A single integer N

Constraints
N <= 10^9

Output Format
Two numbers X and Y denoting the rest of the numbers of the Pythagorean triplet in increasing order.

Sample Input
3
Sample Output
4 5
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	long long N;
	cin>>N;
	if(N<=2){
		cout<<-1;
	}
	else{
		if(N%2==0){
			cout<<(N*N/4)-1<<'\t'<<(N*N/4)+1;
		}
		else{
			cout<<(N*N-1)/2<<'\t'<<(N*N+1)/2;
		}
	}
	cout<<endl;
	return 0;
}