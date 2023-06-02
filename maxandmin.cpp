/*
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[3];
    for(int i=0;i<3;i++){
        cin>>ar[i];
    }
    int max=ar[0];
    for(int i=1;i<3;i++){
        if(ar[i]>max)
        max=ar[i];
    }
    int min=ar[1];
    for(int i=0;i<3;i++){
        if(ar[i]<min){
            min=ar[i];
        }
    }
    cout<<min<<" "<<max;
    return 0;
}