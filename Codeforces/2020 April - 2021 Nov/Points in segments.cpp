#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
	int n,m,arr[110];
	memset(arr,0,sizeof(arr));
	cin>>n>>m;
	arr[0]=1;

	for (int i = 1; i <= n; ++i)
	{
		int l,r;
		cin>>l>>r;
		for (int k = l; k <= r; ++k)
			arr[k]=1;
	}

	int ans[110],solve=0,j=0;
	for (int i = 1; i <= m; ++i)
		if(arr[i]==0)
				solve++, ans[j++]=i;
			
	cout<<solve<<endl;
	for (int i = 0; i < solve; ++i)
		cout<<ans[i]<<" \n"[i==solve-1];
}