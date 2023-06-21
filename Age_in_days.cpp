/*
R. Age in Days
Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".

Note: consider the whole year has 365 days and 30 days per month.

Input
Only one line containing a number N (0 ≤ N ≤ 106).

Output
Print the output, like the following examples.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;cin>>x;
    int y=x/365;
    cout<<y<<" "<<"years"<<endl;
    x=x%365;
      y=x/30;
    cout<<y<<" "<<"months"<<endl;
    x=x%30;
    cout<<x<<" "<<"days";
    return 0;
}