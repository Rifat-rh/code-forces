/*
Binary Search:
Given 2 numbers N
 and Q
, array A of N numbers and Q queries each one contains a number X
.

For each query print a single line that contains "found" if the number X
 exists in array A
 otherwise, print "not found".

Input
First line contains two numbers N
, Q
 (1≤N,Q≤105)
.

Second line contains N
 numbers (1≤Ai≤109)
.

Next Q
 lines contains X
 (1≤X≤109)
.

Output
Print the answer for each query in a single line.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    while(t--){
        int l=0,r=n-1;
        int x;
        cin>>x;
    bool flag=false;
        while (l<=r)
        {
            int mid=(l+r)/2;
            if(a[mid]==x){
                flag=true;
                break;
            }
            if(a[mid]>x){
                r=mid-1;
            }
            else{
                l=mid+1;    
            }

        }

         if(flag==true){
        cout<<"found"<<endl;
        }
        else{
        cout<<"not found"<<endl;
        }


    }

    return 0;
}