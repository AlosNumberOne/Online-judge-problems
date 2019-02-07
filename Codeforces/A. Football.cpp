#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int c1=0,c2=0;
	cin>>s;
	int len=s.size();
	for(int i=0;i<len;i++){
		if(s[i]=='1'){
		c1++;
		c2=0;
		}
		else if(s[i]=='0')
		{
		    c2++;
		    c1=0;	
		}
		if(c1>=7 || c2>=7)
		break;
	}
	if(c1==7 || c2==7)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;	
	//cout<<len;
	// your code goes here
	return 0;
}
