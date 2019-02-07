#include <bits/stdc++.h>
using namespace std;

int main() {
	long long m,n,a;
	cin>>m>>n>>a;
	long long ans=(ceil((double)m/(double)a))*(ceil((double)n/(double)a));
	cout<<ans<<endl;
	// your code goes here
	return 0;
}
