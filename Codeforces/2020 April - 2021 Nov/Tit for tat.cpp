#include<bits/stdc++.h>
using namespace std;
void solve(void)
{
	int n,k,cnt=0;
	cin>>n>>k;
	int arr[110];
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;	
		arr[i]=a;
	}
	while(k)
		{
			if(cnt<n-1)
				break;
			else if(arr[cnt]<=k)
				{
					k-=arr[cnt];
					arr[n-1] += arr[cnt];
					arr[cnt++]=0;
				}
			else
				{
					arr[n-1] += k;
					arr[cnt] -= k;
					k=0;
				}
		}	
		int i=0;
		while(i<n)
				{
					cout<<arr[i]<<" \n"[i == n-1];
					i++;
				}
}
int main()
{
	int count;
	cin>>count;
	for (int i = 0; i < count; ++i)
		solve();	
}