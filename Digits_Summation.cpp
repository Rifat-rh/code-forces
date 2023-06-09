/*
Didit sumation :Given two numbers N and M. Print the summation of their last digits.

Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

Output
Print the answer of the problem.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
   long long int n,m;
    cin>>n>>m;
    long long int x,y;
    x=n%10;
    y=m%10;
    cout<<x+y;
    return 0;
}