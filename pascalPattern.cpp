/*
Problem

Take N (number of rows), print the following pattern (for N = 6)
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1

Input Format
Constraints
0 < N < 100

Output Format
Sample Input
6
Sample Output
1  
1	1  
1	2	1  
1	3	3	1  
1	4	6	4	1  
1	5	10	10	5	1

Explanation
Each number is separated from other by a tab.
*/

//Solution

#include <iostream>
using namespace std;
int main(){
	int i,j,n,c;
	cin>>n;
	for(i=0;i<n;i=i+1){
		for(j=0;j<=i;j=j+1){
			if(j==0){
				c=1;
			}
			else{
				c=c*(i-j+1)/j;
			}
			cout<<c<<'\t';
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
