/*
Problem

Deepak has a limited amount of money that he can spend on his girlfriend. So he decides to buy two roses for her. Since roses are of varying sizes, their prices are different. Deepak wishes to completely spend that fixed amount of money on buying roses for her.
As he wishes to spend all the money, he should choose a pair of roses whose prices when summed up are equal to the money that he has.
Help Deepak choose such a pair of roses for his girlfriend.

NOTE: If there are multiple solutions print the solution that minimizes the difference between the prices i and j. After each test case, you must print a blank line.

Input Format
The first line indicates the number of test cases T.
Then, in the next line, the number of available roses, N is given.
The next line will have N integers, representing the price of each rose, a rose that costs less than 1000001.
Then there is another line with an integer M, representing how much money Deepak has.
There is a blank line after each test case.

Constraints
1≤ T ≤100
2 ≤ N ≤ 10000
Price[i]<1000001

Output Format
For each test case, you must print the message: ‘Deepak should buy roses whose prices are i and j.’, where i and j are the prices of the roses whose sum is equal do M and i ≤ j. You can consider that it is always possible to find a solution. If there are multiple solutions print the solution that minimizes the difference between the prices i and j.

Sample Input
2
2
40 40
80

5
10 2 6 8 4
10
Sample Output
Deepak should buy roses whose prices are 40 and 40.
Deepak should buy roses whose prices are 4 and 6.

Explanation
Find two such kinds of price of roses which has sum up to equal to Deepak's Money.
*/

//Solution

#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void pair_of_roses(){
     int money,rose;
     int i=0,j=0,s=INT_MAX,k1=0,k2=0;
     cin>>rose;
     int price[rose];
     for(i=0;i<rose;i++){
          cin>>price[i];
     }
     cin>>money;
     sort(price,price+rose);
     i=0;
     j=rose-1;
     while(i<j){
          if(price[i]+price[j]>money){
               j--;
          }
          else if(price[i]+price[j]<money){
               i++;
          }
          else{
               if(s>price[j]-price[i]){
                    s=price[j]-price[i];
                    k1=i;
                    k2=j;
              } 
              j--;
          }
     }
     cout<<"Deepak should buy roses whose prices are "<<price[k1]<<" and "<<price[k2]<<'.';
}
int main(){
	int t,z;
	cin>>t;
	for(z=0;z<t;z++){
		pair_of_roses();
          cout<<endl<<endl;
	}
	return 0;
}