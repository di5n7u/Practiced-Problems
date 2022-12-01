/*
Problem

Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Distinct , Real and Equal or Imaginary) and the roots.
If Real and Distinct , print the roots in increasing order.
If Real and Equal , print the same repeating root twice
If Imaginary , no need to print the roots.

Note : Print only the integer part of the roots.

Input Format
First line contains three integer coefficients a,b,c for the equation ax^2 + bx + c = 0.

Constraints
-100 <= a, b, c <= 100

Output Format
Output contains one/two lines. First line contains nature of the roots .The next line contains roots(in non-decreasing order) separated by a space if they exist. If roots are imaginary do not print the roots. Output the integer values for the roots.

Sample Input
1 -11 28
Sample Output
Real and Distinct
4 7

Explanation
The input corresponds to equation ax^2 + bx + c = 0. Roots = (-b + sqrt(b^2 - 4ac))/2a , (-b - sqrt(b^2 - 4ac))/2a
*/

//Solution

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,d,r1,r2;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d<0){
		cout<<"Imaginary"<<endl;
	}
	else if(d>=0){
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		if(r1<r2){
			cout<<"Real and Distinct"<<endl;
			cout<<r1<<' '<<r2;
		}
		else if(r1>r2){
			cout<<"Real and Distinct"<<endl;
			cout<<r2<<' '<<r1;
		}
		else{
			cout<<"Real and Equal"<<endl;
			cout<<r1<<' '<<r2;
		}
	}
	cout<<endl;
	return 0;
}
