#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,c0,c1,c2;
	cin>>t;
	while(t--)
	{
		c0=c1=c2=0;
		cin>>n;
		vector<int>v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];

		for (int i = 0; i < n; ++i)
		{
			if(v[i]%3 == 0) c0++;
			if(v[i]%3 == 1) c1++;
			if(v[i]%3 == 2) c2++;
		}
		int rem;
		int ans = 0,div = n/3;
		if(c0 > div)
		{
			rem = c0 - div; c0-=rem; c1+=rem; ans += rem;
			if(c1 > div) {rem = c1-div; c1-=rem; ans += rem;}
			if (c2 > div) ans += (c2-div)*2;
		}

		else if(c1 > div)
		{
			rem = c1 - div; c1-=rem; c2+=rem; ans += rem;	
			if(c2>div) rem = c2-div, c2-=rem, ans += rem;
			if (c0 > div) ans += (c0-div)*2;
		}
		
		else if(c2 > div)
		{
			rem = c2 - div; c2-=rem; c0+=rem; ans += rem;
			if(c0>div) rem = c0-div, c0-=rem, ans += rem;
			if (c1 > div) ans += (c1-div)*2;
		}
		cout<<ans<<endl;
	}
}