/*
Problem

You are provided two sorted arrays. You need to find the maximum length of bitonic subsequence. You need to find the sum of the maximum sum path to reach from beginning of any array to end of any of the two arrays. You can switch from one array to another array only at common elements.

Input Format
First line contains integer t which is number of test case. For each test case, it contains two integers n and m which is the size of arrays and next two lines contains n and m space separated integers respectively.

Constraints
1<=t<=100 1<=n,m<=100000

Output Format
Print the maximum path.

Sample Input
1
8 8
2 3 7 10 12 15 30 34
1 5 7 8 10 15 16 19
Sample Output
122

Explanation
122 is sum of 1, 5, 7, 8, 10, 12, 15, 30, 34
*/

//Solution

#include<iostream>
#include<climits>
using namespace std;
int max_path_sum(){
	int n1,n2,k1=0,k2=0,k=0,j=0,y=0,i;
	cin>>n1>>n2;
	int a1[n1],a2[n2];
	for(i=0;i<n1;i++){
		cin>>a1[i];
	}
	for(j=0;j<n2;j++){
		cin>>a2[j];
	}
	i=0;
	while(i<n1){
		k1=k1+a1[i];
		j=y;
		while(j<n2){
			k2=k2+a2[j];
			if(a1[i]==a2[j]){
				if(k1>k2){
					k=k+k1;
				}
				else{
					k=k+k2;
				}
				k1=0;
				k2=0;
				y=j+1;
				break;
			}
			else if(j==n2-1 && i!=n1-1){
				k2=0;
				j++;
			}
			else if(j==n2-1 && i==n1-1){
				if(k1>k2){
					k=k+k1;
				}
				else{
					k=k+k2;
				}
				j++;
			}
			else{
				j++;
			}
			
		}
		i++;
	}

	return k;
}
int main(){
	int t,z;
	cin>>t;
	for(z=0;z<t;z++){
		cout<<max_path_sum()<<endl;
	}
	return 0;
}