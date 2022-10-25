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
	int n,i,j,s,no,c,k;
	int x=1;
	cin>>n;
	i=1;
	while(i>=1){
		no=2*i-1;
		s=n-i;
		j=1;
		c=i;
		k=i;
		while(j<=(no+s)){
			if(j<=s){
				cout<<'\t';
				j=j+1;
				continue;
			}
			else if(j>s){
				cout<<c<<'\t';
			}
			if(k>=no){
				c=c-1;
			}
			else if (k<no){
				c=c+1;
			}
			k=k+1;
			j=j+1;
		}
		if (x<n){
			i=i+1;
		}
		else{
			i=i-1;
		}
		x=x+1;

		cout<<endl;
	}
	cout<<endl;
	return 0;
}
