/*
Problem

Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.

Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints
Both M and N are between 1 to 10.

Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END

Explanation
For spiral level anti-clockwise traversal, Go for first column-> last row ->last column-> first row and then do the same traversal for the remaining matrix .
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	short m,n;
	cin>>m>>n;
	int arr[m][n];
	short i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	short sr=0,er=m-1,sc=0,ec=n-1;
	while(sr<=er and sc<=ec){
		for(i=sr;i<=er;i++){
			cout<<arr[i][sc]<<", ";
		}
		sc++;
		for(i=sc;i<=ec;i++){
			cout<<arr[er][i]<<", ";
		}
		er--;
		for(i=er;i>=sr;i--){
			if(ec==sc-1){
				break;
			}
			cout<<arr[i][ec]<<", ";
		}
		ec--;
		for(i=ec;i>=sc;i--){
			if(sr==er+1){
				break;
			}
			cout<<arr[sr][i]<<", ";
		}
		sr++;
	}
	cout<<"END"<<endl;
	return 0;
}