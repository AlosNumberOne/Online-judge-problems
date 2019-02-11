#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    double result;
    scanf("%d\n", &t);
    for(int i=1;i<=t;i++){
        double r;
        scanf("%lf", &r);
        //double sqrtof=2*r;
        result=((2*r)*(2*r))-((2*acos(0.0))*(r*r));
                printf("Case %d: %0.2lf\n", i, result);
        }
       
   
    return 0;
}
