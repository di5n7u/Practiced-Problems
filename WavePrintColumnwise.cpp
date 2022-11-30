/*
Problem

Take as input a two-d array. Wave print it column-wise.

Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints
Both M and N are between 1 to 10.

Output Format
All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 34, 24, 14, END
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	short m,n;
	cin>>m>>n;
	int arr[m][n];
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(i=0;i<n;i++){
		if(i%2==0){
			for(j=0;j<m;j++){
				cout<<arr[j][i]<<", ";
			}
		}
		else{
			for(j=m-1;j>=0;j--){
				cout<<arr[j][i]<<", ";
			}
		}
	}
	cout<<"END"<<endl;
	return 0;
}