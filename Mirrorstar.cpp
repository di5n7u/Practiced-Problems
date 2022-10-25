/*
Problem

Take N (number of rows - only odd numbers allowed), print the following pattern (for N = 5).

      *
   *  *  *  
*  *  *  *  *  
   *  *  *
      *
Input Format
Constraints
0 < N < 10 (only odd numbers allowed)

Output Format
Sample Input
5
Sample Output
      *
    * * *
  * * * * *
    * * *
      *
      
Explanation
Each '*' is separated from other by a tab.
*/

//Solution

#include <iostream>
using namespace std;
int main(){
	int n,i,j,f,k;
	cin>>n;
	f=n-2;
	k=1;
	for(i=1;i<=n;i=i+1){
		if(i<=(n/2)+1){
			for(j=i;j<=(n/2);j=j+1){
				cout<<"\t";
			}
			for(j=1;j<=(2*i)-1;j=j+1){
				cout<<"*\t";
			}
		}
		else{
			for(j=1;j<=k;j=j+1){
				cout<<"\t";
			}
			for(j=1;j<=f;j=j+1){
				cout<<"*\t";
			}
			k=k+1;
			f=f-2;
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
