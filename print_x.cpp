/*
Problem Statement : Printing X.

You will be given an positive odd integer N, you need to print the pattern for it. See sample input and output for understanding the pattern.

Input Format

Input will contain only N.
Constraints

1 <= N <= 20 and N is odd.
Output Format

Output the pattern.
Sample Input 0

5
Sample Output 0

\   /
 \ / 
  X  
 / \ 
/   \
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin>>n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <n; j++) {
      if (i==j ) {
      if(i == n/2)
         cout<<"X";
      else
        cout << "\\";
      }
      else if( i+j==n-1) cout<<"/";
       else {
        cout << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}