#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define print(x) cout<<x<<endl;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<int>adj[205];
int color[205];

bool bfs()
{
	bool flag = true;
	int st = 0;
	queue<int>q;
	q.push(st);
	color[st] = 1;

	while(!q.empty())
	{
		int node = q.front();
		q.pop();

		for (int i = 0; i < adj[node].size(); ++i)
		{
			if(!color[adj[node][i]])
				q.push(adj[node][i]);

			if(!color[ adj[node][i] ] && color[node] == 1)
				color[ adj[node][i] ] = 2;
			else if(!color[ adj[node][i] ] && color[node] == 2)
				color[ adj[node][i] ] = 1;
			else if(color[ adj[node][i] ] && color[node] == color[ adj[node][i] ])
				return false;
		}
	}
	return flag;
}

int main()
{
	int n,l,u,v;
	while(cin>>n)
	{
		memset(color,0,205);
		if(n==0)
			return 0;

		cin>>l;

		for (int i = 0; i < l; ++i)
		{
			cin>>u>>v;
			adj[u].pb(v);
			adj[v].pb(u);
		}
		if(bfs())
			cout<<"BICOLORABLE\n";
		else
			cout<<"NON BICOLORABLE\n";

		for (int i = 0; i < n; ++i)
			adj[i].clear();
	}

}
