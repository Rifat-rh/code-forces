/*  Calculator :
Given a mathematical expression. The expression will be one of the following expressions: A+B
, A−B
, A∗B
 and A/B
.

Print the result of the mathematical expression.

Input
Only one line contains A,S
 and B
 (1≤A,B≤104)
, S
 is either (+,−,∗,/)
.

Output
Print the result of the mathematical expression.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;cin>>x;
    char b; cin>>b;
    int n; cin>>n;
    if(b=='+')cout<<x+n;
    else if(b=='-') cout<<x-n;
    else if(b=='*') cout<<x*n;
    else if(b=='/') cout<<x/n;

    return 0;
}