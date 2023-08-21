/*There are three friend living on the straight line Ox in Lineland. The first friend lives at the point x1, the second friend lives at the point x2, and the third friend lives at the point x3. They plan to celebrate the New Year together, so they need to meet at one point. What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?

It's guaranteed that the optimal answer is always integer.

Input
The first line of the input contains three distinct integers x1, x2 and x3 (1 ≤ x1, x2, x3 ≤ 100) — the coordinates of the houses of the first, the second and the third friends respectively.

Output
Print one integer — the minimum total distance the friends need to travel in order to meet together.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    int min=a[0];
    for(int i=1;i<3;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    int max=a[1];
    for(int i=0;i<3;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int mid;
    for(int i=0;i<3;i++){
        if(a[i]!=max && a[i]!=min){
            mid=a[i];
        }
    }
    int y=max-mid;
    int x=mid-min;
    int c=x+y;
    cout<<c;
    return 0;
}