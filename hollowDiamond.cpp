/*
Problem

Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *
Input Format
Constraints
0 < N < 10 (where N is an odd number)

Output Format
Sample Input
5
Sample Output
*	*	*       *      *		  
*	*	        *      *
* 	                   *
* 	*           *      *
* 	*	*       *      *
	
Explanation
Each '*' is separated from other by a tab.
*/

//Solution

#include <iostream>
using namespace std;
int main(){
	int n,k,pt,s,j;
	int c=0;
	cin>>n;
	int i=0;
	while(i>=0){
		s=(2*i)-1;
		pt=(n-s);
		k=pt/2;
		j=1;
		while(j<=n){
			if(i==0){
				cout<<"*\t";
			}
			else{
				if(j<=k or j>(k+s)){
					cout<<"*\t";
				}
				else{
					cout<<'\t';
				}
			}
			j=j+1;
		}
		if(c<n/2){
			i=i+1;
		}
		else{
			i=i-1;
		}
		c=c+1;
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
