#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		std::vector<int> index(n),v[n];
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			index[i]=a;
		}
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			v[index[i]].push_back(a);
		}
		int maxv=0;
		std::vector<int> sum(n);
		for (int i = 0; i < n; ++i)
		{
			maxv=max(maxv,v[i].size());
			if(v[i].size() != 0)
			{
				for (int j = 0; j < v[i].size(); ++j)
				{
					sum[i]+= v[i][j];
				}
			}
		}
		for (int i = 1; i <= maxv; ++i)
		{
			/* code */
		}
	}
}

#include<bits/stdc++.h>
using namespace std;
 vector<int>vec[200000];
 int ara[2000]={0};
int main()
{
int n,i,j,sum,cnt,x,y,z,a,b,ind[2000];
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>ind[i];
}
for(i=1;i<=n;i++)
{
    cin>>a;
    vec[ind[i]].push_back(a);
}
for(int i=1;i<=n;i++)
{
    sort(vec[i].begin(),vec[i].end());
    reverse(vec[i].begin(),vec[i].end());
    int sum=0;
    for(auto it=vec[i].end()-1;it>=vec[i].begin();it--)
    {
        sum+=*it;
        *it=sum;
    }
}

for(int i=1;i<=n;i++)
{
    z=vec[i].size();
    cnt=0;
    for(auto it=vec[i].begin();it!=vec[i].end();it++)
    {
        cnt++;
        y=z%cnt;
        x=vec[i][0]-vec[i][z-y];
        ara[cnt]+=x;
    }
}

for(i=1;i<=n;i++)
{
    cout<<ara[i]<<endl;
}
}