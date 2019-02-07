#include<bits/stdc++.h>
using namespace std;
 int N;
int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		putchar(i & 2 ? 'b' : 'a');
	puts("");
return 0;
}
