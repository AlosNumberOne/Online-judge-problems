#include <bits/stdc++.h>
using namespace std;
int decBin(int n){
    int mul=1,result=0;
    while(n>0){
        result+=n%2*mul;
        mul*=10;
        n/=2;
    }
    return result;
}
int main() {
    int t,a,b,c,d,w,x,y,z;
    scanf("%d", &t);
    for(int i=1;i<=t;i++){
        scanf("%d.%d.%d.%d", &a,&b,&c,&d);
        scanf("%d.%d.%d.%d", &w,&x,&y,&z);
        if(decBin(a)==w && decBin(b)==x && decBin(c)==y && decBin(d)==z)
        printf("Case %d: Yes\n",i);
        else
        printf("Case %d: No\n", i);
    }
 
    // your code goes here
    return 0;
}
