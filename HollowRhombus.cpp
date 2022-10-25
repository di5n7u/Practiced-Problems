/*
Problem

Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

Input Format
Single integer N.

Constraints
N <= 20

Output Format
Print pattern.

Sample Input
5
Sample Output
    *****
   *   *
  *   *
 *   *
*****

Explanation
For any input N. First line contains 4 space and then 5 {*} and then the second line contains according to the output format.
*/

//Solution

#include <iostream>
using namespace std;
int main(){
	int i,n,j;
	cin>>n;
	for(i=1;i<=n;i=i+1){
		for(j=1;j<=(n-i);j=j+1){
			cout<<' ';
		}
		if(j>(n-i)){
			for(j=1;j<=n;j=j+1){
				if(i==1 or i==n){
					cout<<'*';
				}
				else{
					if(j==1 or j==n){
						cout<<'*';
					}
					else{
						cout<<' ';
					}
				}
			}
		cout<<endl;

		}
	}
	cout<<endl;
	return 0;
}
