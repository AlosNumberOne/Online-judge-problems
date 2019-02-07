#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n; char k [30];
 
    while ( cin >> n >> k ) {
        int len_k = strlen (k);
        int res = 1;
 
        while ( n > 1 ) {
            res *= n;
            n -= len_k;
        }
 
        printf ("%d\n", res);
    }
 

    return 0;
}
