/*
Problem

Given an integer N, print Pascal Triangle upto N rows. 

Input Format
Single integer N.

Constraints
N <= 10

Output Format
Print pascal triangle.

Sample Input
4
Sample Output
       1
     1   1
   1   2   1
 1   3   3   1

Explanation
Last row has one " "
*/

//Solution

#include <iostream>
using namespace std;
int main(){
		int n,i,j,sp,k,c;
		cin>>n;
		sp=n-1;
		for(i=0;i<n;i=i+1){
			cout<<' ';
			for(k=1;k<=sp;k=k+1){
				cout<<'\t';
			}
			for(j=0;j<=i;j=j+1){
				if(j==0){
					c=1;
				}
				else{
					c=c*(i-j+1)/j;
				}
				cout<<c<<'\t'<<'\t';
	
			}
			sp=sp-1;
			cout<<endl<<endl;
		}
		cout<<endl;
		return 0;
}
