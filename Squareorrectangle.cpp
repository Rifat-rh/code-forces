/*
Given the width and the height of a shape determine whether it's for a square or a rectangle?

Input
The first line contains a single integer t(1≤t≤1000)
 the number of test cases.

The first and only line of each test case contains two integers w,h(1≤w,h≤106)
 representing the width and the height, respectively.

Output
For each test case print 'Square' if the shape is a square otherwise print 'Rectangle';
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,w;
        cin>>h>>w;
        if(h==w){
            cout<<"Square"<<endl;
        }
        else {
            cout<<"Rectangle"<<endl;
        }

    }

    return 0;
}

