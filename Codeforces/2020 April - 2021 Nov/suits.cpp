#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int tie,scarv,vest,jacket,cost1,cost2,ans=0;
	cin>>tie>>scarv>>vest>>jacket>>cost1>>cost2;
	if(cost2>cost1)
	{
		int minn=min(jacket,min(vest,scarv));
		ans += cost2*minn;
		jacket-=minn;
		minn=min(jacket,tie);
		ans+=minn*cost1;
	}
	else
	{
		int minn=min(jacket,tie);
		ans += cost1*minn;
		jacket-=minn;
		minn=min(jacket,min(scarv,vest));
		ans += cost2*minn;
	}
	cout<<ans<<endl;
}