/*
Problem

Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.

Input Format
First line contains a single integer N. Next N lines contain N space separated integers.

Constraints
N < 1000

Output Format
Print N lines with N space separated integers of the rotated array.

Sample Input
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Sample Output
4 8 12 16 
3 7 11 15 
2 6 10 14 
1 5 9 13 

Explanation
Rotate the array 90 degrees anticlockwise.
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	short n,i,j,m;
	cin>>n;
	int arr[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(i=0;i<n;i++){
		j=0;
		m=n-1;
		while(j<m){
			swap(arr[i][j],arr[i][m]);
			j++;
			m--;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j<i){
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