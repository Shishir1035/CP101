#include<bits/stdc++.h>
using namespace std;
void solve()
{
		long long lol,lol2;
		cin>>lol>>lol2;
		if(lol2==2)
			cout<<"YES"<<endl<<lol*(lol2-1)<<" "<<(lol2+1)*lol<<" "<< lol*lol2*2<<endl;
		else if(lol2%2)
		{
			if (lol*lol2 && lol * (lol2/2) && lol*((lol2+1)/2))
				cout<<"YES"<<endl<<lol*(lol2/2)<<" "<<lol*((lol2+1)/2)<<" "<<lol*lol2<<endl;
		else
			cout<<"NO\n";
		}
		else
		{
			if (lol*lol2 && lol * (lol2-1) && lol)
				cout<<"YES"<<endl<<lol*(lol2-1)<<" "<<lol<<" "<<lol*lol2<<endl;
			else
				cout<<"NO\n";
		}
}
int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int count;
	cin>>count;
	for (int i = 0; i < count; ++i)
		solve();
	return 0;
}