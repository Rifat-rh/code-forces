/*
Allen has a LOT of money. He has n
 dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1
, 5
, 10
, 20
, 100
. What is the minimum number of bills Allen could receive after withdrawing his entire balance?

Input
The first and only line of input contains a single integer n
 (1≤n≤109
).

Output
Output the minimum number of bills that Allen could receive.


*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[5]={100,20,10,5,1};
    int n;cin>>n;
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+n/ar[i];
        n=n%ar[i];
    }
      
    
   cout<<sum;
    return 0;
}