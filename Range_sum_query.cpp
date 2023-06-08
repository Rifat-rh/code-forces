/*
                  Range sum query
Given 2 numbers N
 and Q
, an array A
 of N
 number and Q
 number of pairs L
, R
. For each query Q
 print a single line that contains the summation of all numbers from index L
 to index R
.

Input
First line contains two numbers N
, Q
 (1≤N,Q≤105)
 where N
 is number of elements in A
 and Q
 is number of query pairs.

Second line contains N
 numbers(1≤Ai≤109)
.

Next Q
 lines contains L,R
 (1≤L≤R≤N)
.

Output
For each query Q
 print a single line that contains the summation of all numbers from index L
 to index R
.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
   long long int n,t;
    cin>>n>>t;
    long long int a[n];
    long long int pre[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]=a[i]+pre[i-1];
    }
    while (t--)
    {
       long long int l,r;
       long long int sum=0;
        cin>>l>>r;
        l--;
        r--;
        if(l==0) sum=pre[r]-0;
        else{
            sum=pre[r]-pre[l-1];
        }
        cout<<sum<<endl;
    }
    
    return 0;
}