#include<bits/stdc++.h>
using namespace std;
void SOLVE()
{
		int n,cnt=0,FLAG=1;
		cin>>n;
		std::vector<int> v(500);
		string str;
		cin>>str;
		int m=str[0];
		v[m]++;
		for(int i=1;i<n;i++)
		{
			if(str[i]==str[i-1])
				continue;
			else
			{
				m=str[i];
				if(v[m])
				{
					FLAG=0;
					break;
					continue;
				}
			   	v[m]++;
			}
		}
		if(FLAG!=1)
			cout<<"NO"<<endl;
		else 
			cout<<"YES"<<endl;
}
int main()
{
   	int count;
   	cin>>count;
    for (int kk = 0; kk < count; ++kk)
		SOLVE();
}