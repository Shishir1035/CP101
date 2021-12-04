#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c0,c1,h;
		cin>>n>>c0>>c1>>h;
		string str;
		cin>>str;
		int zero=0, one=0;
		for (int i = 0; i < str.size(); ++i)
		{
			if(str[i]=='0')
				zero++;
			else
				one++;
		}
		int minn;
		minn=zero*c0 + one*c1;

		if((zero*h + zero*c1) < zero*c0)
			minn= min(minn,zero*h + zero*c1 + one*c1);
		if((one*h + one*c0) < one*c1)
			minn= min(minn, one*h + one*c0 + zero*c0);
		cout<<minn<<endl;
	}
}