/*
 Area of a Circle
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a number R calculate the area of a circle using the following formula:
Area = π * R2.

Note: consider π = 3.141592653.

Input:
Only one line containing the number R (1  ≤  R  ≤  100).
Output:
Print the calculated area, with 9 digits after the decimal point.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    double r;
    cin>>r;
    cout<<fixed<<setprecision(9)<<r*r*3.141592653;
    return 0;
}