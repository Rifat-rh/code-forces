/*
            SUM DIGIT
Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

Input
First line contains a number N (1  ≤  N  ≤  106) number of digits.

Second line contains N digits (0 ≤ Ai ≤ 9).

Output
Print the summation of these digits.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        int y=x-48;
        sum=sum+y;
    }
    cout<<sum;
    return 0;
}