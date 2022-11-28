/*
Problem

Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which inverses the array. Print the values of inverted array

Input Format
Enter a number N and take N more inputs

Constraints
None

Output Format
Display the values of the inverted array in a space separated manner

Sample Input
5
0 2 4 1 3
Sample Output
0 3 1 4 2

Explanation
Swap element with index

for eg : element 4 at index 2 becomes element 2 at index 4
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	long long n,k;
	cin>>n;
	long long a[n];
	for(long long i=0;i<n;i++){
		cin>>k;
		a[k]=i;
	}
	for(long long i=0;i<n;i++){
		cout<<a[i]<<' ';
	}

	cout<<endl;
	return 0;
}