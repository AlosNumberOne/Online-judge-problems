#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    scanf("%d\n", &t);
    for(int i=1;i<=t;i++){
        int n,sum=0;
        scanf("%d", &n);
        for(int j=1;j<=n;j++){
            int dust;
            scanf("%d", &dust);
            if(dust>0)
                   sum=sum+dust;
        }
        printf("Case %d: %d\n", i,sum);
    }
    return 0;
}
