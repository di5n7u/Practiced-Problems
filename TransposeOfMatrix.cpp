/*
Problem

Given a square matrix, print its transpose.

Input Format
First line contains the N ,size of the square matrix. Next N lines contains N integers each denoting the elements of the matrix

Constraints
1 <= N <= 10^3

Output Format
Print N lines each containing N elements. These are the elements of the new matrix.

Sample Input
5
1 46 4 60 100 
28 52 97 80 59 
6 33 62 42 12 
57 31 56 89 47 
1 50 73 53 99 
Sample Output
1 28 6 57 1 
46 52 33 31 50 
4 97 62 56 73 
60 80 42 89 53 
100 59 12 47 99
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	short n,i,j;
	cin>>n;
	int arr[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>j){
				swap(arr[i][j],arr[j][i]);
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<arr[i][j]<<'\t';
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}