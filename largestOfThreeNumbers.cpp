/*
Problem

Input three numbers, print the largest of these numbers

Input Format
Three numbers (both positive and negative numbers are allowed)

Output Format
the largest number

Sample Input
5 7 4
Sample Output
7

*/

// Solution

#include<iostream>
#include <climits>// To get least value of buckets
using namespace std;
int main() {
	int i=1;
	int no;
	int largest=INT_MIN; // INT_MIN== -2^(31)
	while (i<=3){
		cin>>no;
		if(largest<no){
			largest=no;
		}
		i=i+1;
	}
	cout<<largest<<endl;
	return 0;
}
