/*
Problem

Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34

Input Format
Constraints
0 < N < 100

Output Format
Sample Input
4
Sample Output
0 
1    1 
2    3     5 
8   13    21    34

Explanation
Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.
*/

//Solution

#include <iostream>
using namespace std;
int main(){
	int n,f,i,c,j;
	int a=0;
	int b=1;
	cin>>n;
	for(i=1;i<=n;i=i+1){
		for(j=1;j<=i;j=j+1){
			if(i==1){
				cout<<a;
				c=a;
				f=c;
			}
			else if(i==2){
				cout<<b;
				c=b;
				b=b+f;
				f=c;
			}
			else{
				cout<<b;
				c=b;
				b=b+f;
				f=c;
			}
			if(i!=j){
				cout<<char(9);
			}
		}
		cout<<endl;
		
	}
	cout<<endl;
	return 0;
}

