/*Petya loves lucky numbers. Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number. Help him find out if the given number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) — the number that needs to be checked.

Output
In the only line print "YES" (without the quotes), if number n is almost lucky. Otherwise, print "NO" (without the quotes).

Examples*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    if(n%4==0){
        cout<<"YES";
    }
    else if(n%477==0){
        cout<<"YES";
    }
    else if(n%7==0){
        cout<<"YES";
    }
    else if (n%47==0){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}