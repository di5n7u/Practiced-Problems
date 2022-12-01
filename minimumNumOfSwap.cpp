/*
Problem

Given an array of n distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order.

Input Format
N
N elements

Constraints
N<=10^7

Output Format
Minimum steps

Sample Input
4
2 8 5 4
Sample Output
1

Explanation
swap 8 with 4.
*/

//Solution

#include<iostream>
using namespace std;
int main(){
	int n,i,j,k=0,min=0,p=0,i1=0,a=0,j1=0,p1=0,d=0,in=0;
	cin>>n;
	if(n<=1000000){
		int arr[n];
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		for(i=0;i<n;i++){
			min=arr[i];
			for(j=i;j<n;j++){
				if(arr[j]<min){
					min=arr[j];
					in=j;
					p=1;
				}
			}
			if(p==1){
				swap(arr[i],arr[in]);
				k=k+1;
			}	
			p=0;
		}
	}
	else{
		k=0,p=0;
		int arr[1000000];
		int extrarr[n-1000000];
		for(i=0;i<n;i++){
			if(i<1000000){
				cin>>arr[i];
			}
			else{
				cin>>extrarr[i1];
				i1++;
			}
		}
		i1=0;
		for(i=0;i<n;i++){
			if(i<1000000){
				min=arr[i];
				a=i;
			}
			else{
				min=extrarr[i1];
				a=i1;
			}
			for(j=a;j<n;j++){
				if(j<1000000){
					if(min>arr[j]){
						min=arr[j];
						in=j;
						p=1;
					}
				}
				else{
					if(min>extrarr[j1]){
						min=extrarr[j1];
						in=j1;
						p1=1;
					}
					j1++;
				}
			}
		}
		if(i<1000000){
			if(p1==1){
				d=arr[i];
				arr[i]=min;
				extrarr[in]=d;
			}
			else if(p==1){
				d=arr[i];
				arr[i]=min;
				arr[in]=d;
			}
		}
		else{
			if(p1==1){
				d=extrarr[i1];
				extrarr[i1]=min;
				extrarr[in]=d;
			}
			else if(p==1){
				d=extrarr[i1];
				extrarr[i1]=min;
				arr[in]=d;
			}
			i1++;
		}
		if(p==1 or p1==1){
			k=k+1;
		}

	}
	cout<<k<<endl;
	return 0;
}