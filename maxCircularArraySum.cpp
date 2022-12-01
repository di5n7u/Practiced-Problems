/*
Problem

You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form. You need to find the maximum sum of consecutive numbers.

Input Format
First line contains integer t which is number of test case.
For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.

Constraints
1<=t<=100
1<=n<=1000
|Ai| <= 10000

Output Format
Print the maximum circular sum for each testcase in a new line.

Sample Input
1
7
8 -8 9 -9 10 -11 12
Sample Output
22

Explanation
Maximum Circular Sum = 22 (12 + 8 - 8 + 9 - 9 + 10)
*/

//Solution

#include<iostream>
#include<climits>
using namespace std;
int max_circular_sum(){
     int n,i,y=1,f=0,s=INT_MIN,x;
	cin>>n;
	x=n;
	int a[2*n]={0};
	for(i=1;i<2*n;i++){
		if(i<=n){
			cin>>a[i];
		}
		else{
			a[i]=a[i-n];
		}
	}
	for(i=1;i<2*n;i++){
		a[i]=a[i-1]+a[i];
	}
	i=1;
	while(i<=x){
		f=(a[i]-a[y-1]);
		if(s<f){
			s=f;
		}
		if(i==2*n-1){
			break;
		}
		else if(i==x){
			y++;
			i=y;
			x++;
		}
		else{
			i++;
		}
		f=0;
	}
	return s;
}
int main(){
	int t,z;
	cin>>t;
	for(z=0;z<t;z++){
		cout<<max_circular_sum()<<endl;
	}
	return 0;
}