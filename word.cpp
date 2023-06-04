/*
Given a string S
. Print S
 after replacing every sub-string that is equal to "EGYPT" with space.

Input
Only one line contains a string S
 (1≤|S|≤103)
 where |S| is the length of the string and it consists of only uppercase English letters.

Output
Print the result as required above.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    while( s.find("EGYPT")!=-1){
        s.replace(s.find("EGYPT"),5," ");
    }
    cout<<s;

    return 0;
}