#include<bits/stdc++.h>
using namespace std;
int main() {
     int test,sum=0;
     scanf("%d", &test);
     for(int i=1; i<=test;i++){
        int number1,number2;
        scanf("%d%d", &number1,&number2);
        sum=number1+number2;
        printf("Case %d: %d\n",i,sum);
     
       
     }
     return 0;
    }
