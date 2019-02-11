#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
    int p1m,p2l,result=0;
    scanf("%d%d", &p1m,&p2l);
    if(p1m<=p2l)
            result=p2l*4+19;
        else
            result=(2*p1m-p2l)*4 +19;
        printf("Case %d: %d\n", i,result);
    }
    return 0;
}
