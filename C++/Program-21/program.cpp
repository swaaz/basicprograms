/* Compute the last digit of the sum of partial Fibonacci series. (Given two non-negative integers m and n, where m <= n, find the last digit of the sum Fm + Fm+1 + .... + Fn) */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
   ll n = 0, m = 0;
   int b[60] = {0, 1, 2, 4, 7, 2, 0, 3, 4, 8, 3, 2, 6, 9, 6, 6, 3, 0, 4, 5, 0, 6, 7, 4, 2, 7, 0, 8, 9, 8, 8, 7, 6, 4, 1, 6, 8, 5, 4, 0, 5, 6, 2, 9, 2, 2, 5, 8, 4, 3, 8, 2, 1, 4, 6, 1, 8, 0, 9, 0};
   int i = 0, j = 0, sum = 0;

   cin >> n >> m;

   i = (n-1) % 60;
   j = m % 60;

   if(b[j] >= b[i])
   {
      cout << b[j] - b[i] << "\n";
   }
   else
   {
      b[j] += 10;
      cout << b[j] - b[i] << "\n";
   }
}

int main()
{
   //for fast input output
   ios_base::sync_with_stdio(false);cin.tie(NULL);

   solve();
 
   return 0;
}