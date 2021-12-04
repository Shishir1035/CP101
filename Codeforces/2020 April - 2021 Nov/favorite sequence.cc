#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int a,cnt=0,i;
		cin>>n;
		vector<int>giv(n),ans(n);
		vector<int>::iterator it1=giv.begin();
		vector<int>::iterator it2=giv.end()-1;
		for(i=0; i<n; i++)
		{
	        cin>>a;
	        giv[i]=a;
		}
		for(i=0;i<n;i++)
		{
			if(cnt%2==0)
				ans[i]=*it1,it1++;
			else if(cnt%2==1)
				ans[i]=*it2,it2--;
				cnt++;
		}
		for(vector<int>::iterator it=ans.begin(); it!=ans.end(); it++)
			cout<<*it<<" \n"[it==ans.end()-1];
	}
}