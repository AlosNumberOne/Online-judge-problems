#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0;
	scanf("%d", &n);
	if(n>0){
		for(int i=0;i<=n;i++){
			sum+=i;
		}
	}
	else if(n<=1){
		for(int i=1;i>=n;i--){
			sum+=i;
		}
	}
	cout<<sum<<endl;
	return 0;
}
