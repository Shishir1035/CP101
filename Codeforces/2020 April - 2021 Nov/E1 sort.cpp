#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,n;
		cin>>n;
		deque<int>dq;
		for (int i = 0; i < n; ++i)
		{
			cin>>a;
			if(dq.empty())
				dq.push_back(a);
			else if(a<dq.front())
				dq.push_front(a);
			else
				dq.push_back(a);
		}
		int sz = dq.size();
		for (int i = 0; i < sz; ++i)
		{
			cout<<dq.front()<<" \n"[i==sz-1];
			dq.pop_front();
		}
	}
}