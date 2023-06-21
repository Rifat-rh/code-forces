/* First digit !
Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    while(true){
        if(x<10) break;
        x%10;
        x=x/10;
    }
   if(x%2==0){
    cout<<"EVEN";
   }
   else cout<<"ODD";
    return 0;
}
