/*
Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

Note:
Digits in ASCII '0' = 48,'1' = 49 ....etc
Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
Small letters in ASCII 'a' = 97,'b' = 98 ....etc
Input
Only one line containing a character X which will be a capital or small letter or digit.

Output
Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    char a;
    cin>>a;
    if(a>='0' && a<='9')
    cout<<"IS DIGIT";
    else{
        if(a>='A' && a<='Z'){
           cout<<"ALPHA"<<endl<<"IS CAPITAL";
        }
        else if(a>='a'&&a<='z'){
            cout<<"ALPHA"<<endl<<"IS SMALL";
        }
    }
    return 0;
}
