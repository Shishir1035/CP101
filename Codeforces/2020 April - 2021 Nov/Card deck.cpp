#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,cnt = 0;
		cin>>n;
		vector<int> v(n);
		deque<int>ans,dq;

		for (int i = 0; i < n; ++i)
			cin>>v[i];
		
		dq.push_back(v[0]);

		for (int i = 1; i < n; ++i)
		{
			if(v[i] > dq.front())
			{
				if(ans.empty())
					while(!dq.empty())
					{
						ans.push_back(dq.front());
						dq.pop_front();
					}

				else
					while(!dq.empty())
					{
						ans.push_front(dq.back());
						dq.pop_back();
					}		
			}
			dq.push_back(v[i]);
		}

		while(!dq.empty())
		{
			ans.push_front(dq.back());
			dq.pop_back();
		}
		int sz = ans.size();
		printvec(ans, sz);
	}
}