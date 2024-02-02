/*
You are given an array a
 of n
 integers, your task is to print the first (front) element then remove it, then print the last(end) element then remove it, and so on until the array becomes empty.

Input
The first line contains an integer n(1≤n≤105)
 the number of elements in the array a

The second line contains n
 integers ai(−109≤ai≤109)
 the elements of the array a
.

Output
Print the array a
 with the required order.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=n-1;
    int k=0;

        for(int i=0;i<n;i++){

        if(i%2==0){
            cout<<a[k]<<" ";
            k++;
        }
        else{
            cout<<a[j]<<" ";
            j--;

        }
    }
    return 0;
}


