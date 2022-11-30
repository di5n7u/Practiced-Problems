/*
Problem

Given an array of M x N elements (M rows, N columns), return all elements of the array in diagonal order .

Input Format
Two integers M(row) and N(column) and Second line contains N*M space separated integers denoting the elements of Array.

Constraints
The total number of elements of the given array will not exceed 10,000.

Output Format
display Diagonal

Sample Input
3 3
1 2 3 4 5 6 7 8 9
Sample Output
1 2 4 7 5 3 6 8 9
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	short m,n,i,j,k=0,f=0;
	cin>>m>>n;
	int arr[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	i=0,j=0;
	while(1){
		cout<<arr[i][j]<<' ';
		if(i==m-1 and j==n-1){
			break;
		}
		else if((i==0 or j==n-1)and(f==k)){
			if(j<n-1){
				j++;
			}
			else{
				i++;
			}
			k++;
		}
		else if((j==0 or i==m-1)and(f==k)){
			if(i<m-1){
				i++;
			}
			else{
				j++;
			}
			k++;
		}
		else{
			if(k%2==0){
				j++;
				i--;
				if(j==n-1 or i==0){
					f=k;
				}
			}
			else{
				i++;
				j--;
				if(i==m-1 or j==0){
					f=k;
				}
			}
		}
	}
	cout<<endl;
	return 0;
}