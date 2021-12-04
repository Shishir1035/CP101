#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		string s,t,s1,s2;
		cin>>s>>t;
		s1=s, s2=t;
		a=s.size(),b=t.size();
		int sz = (a*b)/__gcd(a,b);
		while(a!=sz){
			s1 += s;
			a=s1.size();
		}
		while(b!=sz){
			s2 += t;
			b=s2.size();
		}
		if(s1==s2) cout<<s1<<endl;
		else cout<<-1<<endl;
	}
}