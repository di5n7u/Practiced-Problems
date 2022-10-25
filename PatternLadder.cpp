/*
Problem

Take N (number of rows), print the following pattern (for N = 4)

1
2 3
4 5 6
7 8 9 10

Input Format
Constraints
0 < N < 100

Output Format
Sample Input
4
Sample Output
1  
2	3  
4	5	6  
7	8	9	10

Explanation
Each number is separated from other by a tab.
*/

//Solution

#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	int f=1;
	cin>>n;
	
	for(i=1;i<=n;i=i+1){
		for(j=1;j<=i;j=j+1){
			cout<<f;
			f=f+1;
			if(j!=i){
				cout<<char(9);
			}
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
