/*
Problem

Take N as input. For a value of N=5, we wish to draw the following pattern :

                          5 4 3 2 1 0 1 2 3 4 5
                            4 3 2 1 0 1 2 3 4 
                              3 2 1 0 1 2 3 
                                2 1 0 1 2 
                                  1 0 1 
                                    0 
                                  1 0 1 
                                2 1 0 1 2 
                              3 2 1 0 1 2 3 
                            4 3 2 1 0 1 2 3 4 
                          5 4 3 2 1 0 1 2 3 4 5
Input Format
Take N as input.

Constraints
N <= 20

Output Format
Pattern should be printed with a space between every two values.

Sample Input
5
Sample Output
 5 4 3 2 1 0 1 2 3 4 5
   4 3 2 1 0 1 2 3 4 
     3 2 1 0 1 2 3 
       2 1 0 1 2 
         1 0 1 
           0 
         1 0 1 
       2 1 0 1 2 
     3 2 1 0 1 2 3 
   4 3 2 1 0 1 2 3 4 
 5 4 3 2 1 0 1 2 3 4 5
 
*/

//Solution

#include <iostream>
using namespace std;
int main(){
	int n,i,j,x,s,k,z;
	cin>>n;
	x=1;
	i=n;
	while(i<=n){
		s=n-i;
		for(k=1;k<=s;k=k+1){
			cout<<"  ";
		}
		z=1;
		j=i;
		while(j<=i){
			cout<<j<<' ';
			if(z<i+1){
				j=j-1;
			}
			else{
				j=j+1;
			}
			z=z+1;
		}
		if(x<n+1){
			i=i-1;
		}
		else{
			i=i+1;
		}
		x=x+1;
		cout<<endl;

	}
	cout<<endl;
	return 0;
}
