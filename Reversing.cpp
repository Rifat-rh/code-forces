/*
        Reversing
Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
   int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   reverse(v,v+n);
   for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}