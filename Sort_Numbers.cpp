/* SORT NUMBER
Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[3];
    for(int i=0;i<3;i++){
        cin>>ar[i];
    }
    int a[3];
    for(int i=0;i<3;i++){
        a[i]=ar[i];
    }
    sort(ar,ar+3);
    for(int i=0;i<3;i++){
        cout<<ar[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}