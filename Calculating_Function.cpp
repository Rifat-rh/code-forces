/*
For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n;
   cin>>n;
   long long int r,res;
   if(n%2==0){
    r=n/2;
   }
   else
   r=(n/2)+1;

   res=pow(-1,n)*r;
   cout<<res; 
    return 0;
}