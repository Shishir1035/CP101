// https://codeforces.com/problemset/problem/490/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)
int main()
{
	int n,  arr[5050], on[5050], tw[5050], thr[5050];
	cin>>n;
	int one = 0, two = 0, three = 0;
	int d = 0, e = 0, f = 0;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		arr[i] = a;
		if (a==1)
			{
				one++;
				on[d++] = i;
			}
		if(a==2)
			{
				two++;
				tw[e++] = i;
			}
		if(a==3)
			{
				three++;
				thr[f++] = i;
			}
	}
	int team = min(min(one,two),three);
	cout<<team<<endl;
	if(team)
		for(int i = 0; i < team; i++)
			cout<<on[i]+1<<" "<<tw[i]+1<<" "<<thr[i]+1<<endl;

}