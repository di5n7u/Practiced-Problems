/*
Problem

Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output
            1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4

Explanation
Each number is separated from other by a tab.
*/

//Solution

#include <iostream>
using namespace std;
int main(){
	int n,i,j,s,no,c,k;
	cin>>n;
	for(i=1;i<=n;i=i+1){
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
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
