#include <bits/stdc++.h>
using namespace std;
 
int main() {
 // your code goes here
 int T, n;
 scanf("%d", &T);
 //cin >> T;
 for (int i = 1; i <= T; i++) {
  //cin >> n;
  scanf("%d",&n);
  if (n > 10) {
   //cout << n - 10 << " " << n - (n - 10) << "\n";
   printf("%d %d\n", n-10, n-(n-10));
  }
  else {
  // cout << 0 << " " << n << "\n";
   printf("0 %d\n", n);
  }
 }
 return 0;
}
