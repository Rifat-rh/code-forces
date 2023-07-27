/*
Given a number N
. Print the summation of the numbers that is between 1 and N
 (inclusive).

.∑i=1Ni
Input
Only one line containing a number N
 (1≤N≤109)
Output
Print the summation of the numbers that are between 1 and N
 (inclusive).
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n;
   cin>>n;
   long long int sum=0;
    sum=(n*(n+1)/2);
    cout<<sum;
   return 0;
}