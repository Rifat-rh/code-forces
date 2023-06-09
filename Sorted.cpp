/*
Problem Statement   : Sorted.

You will given an array A of size N. You need to tell if the array is already sorted or not. If the array is sorted in ascending order print "YES", otherwise print "NO".

Input Format

First line will contain T, the number of test cases.
The first line of each test case will contain N.
The second line of each test case will contain the array A.
Constraints

1 <= T <= 1000
1 <= N <= 1000
0 <= A[i] <= 1000; Where 0 <= i < N
Output Format

Output "YES" or "NO" without the quotation marks according to the problem statement.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
        while (n--)
        {
            int num;cin>>num;
        int a[num];
        for(int i=0;i<num;i++){
            cin>>a[i];
        }
        bool flag=false;
        for(int i=0;i<num;i++){
           for(int j=i+1;j<num;j++){
            if(a[i]>a[j])
            flag=true;
            break;
           }
        }
       if(flag==true) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        }
        
    
    
    return 0;
}