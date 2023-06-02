/*
Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int max=ar[0];
    for(int i=1;i<n;i++){
        if(ar[i]>max)
        max=ar[i];
    }
    cout<<max;
    return 0;
}