/*
Problem

Read as input 5 Numbers and print the largest out of them

Input Format
5 Space Separated Numbers (both positive and negative)

Output Format
Sample Input
2 4 7 -2 3
Sample Output
7

Explanation
In the given case 7 is largest among the given numbers.
*/

//Solution

#include<iostream>
#include <climits>// To get least value of buckets
using namespace std;
int main() {
	int i=1;
	int no;
	int largest=INT_MIN; // INT_MIN== -2^(31)
	while (i<=5){
		cin>>no;
		if(largest<no){
			largest=no;
		}
		i=i+1;
	}
	cout<<largest<<endl;
	return 0;
}
