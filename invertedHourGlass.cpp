/*
Problem

Take N as input. For a value of N=5, we wish to draw the following pattern :

             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 
Input Format
Take N as input.

Constraints
Output Format
Pattern should be printed with a space between every two values.

Sample Input
5
Sample Output
5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5

*/

//Solution

#include <iostream>
using namespace std;
int main(){
	int n,x,z,i,j;
	cin>>n;
	z=1;
	i=n;
	while(i<=n){
		x=1;
		j=n;
		while(j<=n){
			if(j>=i){
				cout<<j<<' ';
			}
			else{
				cout<<"  ";
			}
			if(x<=n){
				j=j-1;
			}
			else{
				j=j+1;
			}
			x=x+1;

		}
		if(z<=n){
			i=i-1;
		}
		else{
			i=i+1;
		}
		z=z+1;
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
