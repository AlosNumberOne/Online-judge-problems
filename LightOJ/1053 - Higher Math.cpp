#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    scanf("%d\n", &t);
    for(int i=1;i<=t;i++){
                long long a,b,c;
                long long rs,h,lb;
        scanf("%lld%lld%lld", &a,&b,&c);
        if(a>b && a>c){
        h=a*a;
        lb=(b*b)+(c*c);
           
        }
        else if(b>a && b>c){
        h=b*b;
        lb=(a*a)+(c*c);
        }
        else if(c>a && c>b){
        h=c*c;
        lb=(a*a)+(b*b);
        }
        if(h==lb)
                printf("Case %d: yes\n", i);
                else
                printf("Case %d: no\n",i);
        }
       
   
    return 0;
}
