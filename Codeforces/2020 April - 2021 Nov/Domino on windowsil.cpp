// https://codeforces.com/problemset/problem/1499/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int n,k1,k2,w,b;

void calculate(void)
{
	int black=0,white=0;
	int x=n-k1, y=n-k2;

	int d = min(k1,k2);
	if(d==k1)
		{
			if(k1)
			{
				white += d;
				k2-=d;
			}
			white+= k2/2;
		}
	else if(d==k2)
		{
			if(k2)
			{
				white += d;
				k1-=d;
			}
			white += k1/2;
		}

	d=min(x,y);
	if(d==x)
		{
			if(x)
			{
				black += d;
				y-=d;
			}
			black += y/2;
		} 
	else if(d==y)
		{
			if(y)
			{
				black += d;
				x-=d;
			}
			black += x/2;
		}
		// cout<<white<<" "<<black;
	if(white>=w && black>=b)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k1>>k2;
		cin>>w>>b;
		calculate();
	}
}
