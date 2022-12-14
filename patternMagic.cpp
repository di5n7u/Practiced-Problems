/*
Problem

You will be given a number N. You have to code a hollow diamond looking pattern.

The output for N=5 is

*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********

Input Format
The input has only one single integer N.

Explanation
Write a code to print above given pattern. No space between any two characters.
*/

//Solution

#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,s,i,j,k1,k2;
	scanf("%i",&n);
	k1=0;
	k2=n;
	s=2*n-1;
	for(i=1;i<=s;i=i+1){
		for(j=1;j<=s;j=j+1){
			if(k1==0){
				printf("%c",'*');
			}
			else{
				if(j<=k2 or j>(k1*2-1+k2)){
					printf("%c",'*');
				}
				else{
					printf("%c",' ');
				}
			}
		}
		if(i<n){
			k1=k1+1;
			k2=k2-1;
		}
		else{
			k1=k1-1;
			k2=k2+1;
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
