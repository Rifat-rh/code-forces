/* The Brothers :
Given two person names.

Each person has {"the first name" + "the second name"}

Determine whether they are brothers or not.

Note: The two persons are brothers if they share the same second name.

Input
First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.

Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

Output
Print "ARE Brothers" if they are brothers otherwise print "NOT".
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    char s1[100],f1[100];
    cin>>s1>>f1;
      char s2[100],f2[100];
    cin>>s2>>f2;
    bool flag=true;
    if(strcmp(f1,f2)!=0) flag=false;
    if(flag==true) cout<<"ARE Brothers";
    else cout<<"NOT";
    
    return 0;
}