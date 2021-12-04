#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)

int absolute(int a, int b)
{
	if (a>b)
		return a-b;
	else
		return b-a;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,A,B,a,b;
		cin>>n>>x>>A>>B;
		a=min(A,B);
		b=max(A,B);
		while(x)
		{
			if(absolute(1,a)<=x && a!=1)
			{
				x=x-absolute(1,a);
				a=1;
			}
			else if(absolute(1,a) > x && a!=1)
			{
				a-=x;
				x=0;
			}
			else if(absolute(n,b)<=x && b!=n)
			{
				x=x-absolute(n,b);
				b=n;
			}
			else if(absolute(n,b) > x && b!=n)
			{
				b+=x;
				x=0;
			}
			else
				break;
		}
		cout<<absolute(a,b)<<endl;
	}
}